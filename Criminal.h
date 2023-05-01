#pragma once

#include <msclr\marshal.h>
#include <msclr/marshal_cppstd.h>
#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <algorithm>
#include <ctime>
#include <vector>
#include <nlohmann/json.hpp>
using namespace std;
using namespace msclr::interop;

using jsonf = nlohmann::json; 




//#include "rapidjson/document.h"
//#include "rapidjson/writer.h"
//#include "rapidjson/stringbuffer.h"

//using std::string;
//using std::list;
//using System::DateTime;
//using std::string;
//using namespace rapidjson;


class Criminal
{
private:
	string Surname;
	string Name;
	string NickName; //уникальное поле для каждого объекта
	int Height;
	string HairColor;
	string EyeColor;
	list<string> SpecialSigns; // список особых примет преступника
	string Citizenship;
	string PlaceBirth;
	string DateBirth; // 
	list<string> LanguageSkills; // список языков, которые знает преступник
	string Profession;

public:
	void set_Surname(string _surname){Surname = _surname;}
	string get_Surname() { return Surname; }

	void set_Name(string _Name) { Name = _Name; }
	string get_Name() { return Name; }

	void set_NickName(string _NickName) { NickName = _NickName; }
	string get_NickName() { return NickName; }

	void set_Height(int _Height) { Height = _Height; }
	int get_Height() { return Height; }

	void set_HairColor(string _HairColor) { HairColor = _HairColor; }
	string get_HairColor() { return HairColor; }

	void set_EyeColor(string _EyeColor) { EyeColor = _EyeColor; }
	string get_EyeColor() { return EyeColor; }

	void set_SpecialSigns(list<string> _SpecialSigns) { SpecialSigns = _SpecialSigns; }
	list<string> get_SpecialSigns() { return SpecialSigns; }

	void set_Citizenship(string _Citizenship) { Citizenship = _Citizenship; }
	string get_Citizenship() { return Citizenship; }

	void set_PlaceBirth(string _PlaceBirth) { PlaceBirth = _PlaceBirth; }
	string get_PlaceBirth() { return PlaceBirth; }

	void set_DateBirth(string _DateBirth) { DateBirth = _DateBirth; }
	string get_DateBirth() { return DateBirth; }

	void set_LanguageSkills(list<string> _LanguageSkills) { LanguageSkills = _LanguageSkills; }
	list<string> get_LanguageSkills() { return LanguageSkills; }

	void set_Profession(string _Profession) { Profession = _Profession; }
	string get_Profession() { return Profession; }

	// инициализация объекта (все параметры являются обязательными)
	Criminal(string sur, string name, string nick, int height, string hair, string eye, list<string> signs, string city, string place, string date, list<string> lang, string prof)
	{
		Surname = sur; Name = name; NickName = nick;
		Height = height; HairColor = hair; EyeColor = eye;
		Citizenship = city; PlaceBirth = place; DateBirth = date;
		SpecialSigns = signs; Profession = prof; LanguageSkills = lang;
	}
	//иницализация объекта без никнейма 
	Criminal(string sur, string name, int height, string hair, string eye, list<string> signs, string city, string place, string date, list<string> lang, string prof)
	{
		Surname = sur; Name = name;
		Height = height; HairColor = hair; EyeColor = eye;
		Citizenship = city; PlaceBirth = place; DateBirth = date;
		SpecialSigns = signs; Profession = prof; LanguageSkills = lang;
	}
	//иницализация пустого объекта
	Criminal() {};


	//проверка на наличие преступника в базе
	static bool Find(vector<Criminal> criminals, string nickname)
	{
		bool flag = false;
		for (Criminal criminal : criminals)
		{
			if (criminal.NickName == nickname)
			{
				flag = true;
			}
		}
		return flag;
	}
	
	//метод для получения списка всех  преступников, которые удовлетворяют поиску по заданному преступнику
	static vector<Criminal> FindCriminal(vector<Criminal> criminals, Criminal nickname)
	{
		vector <Criminal> output; //инициализация выходного списка
		bool flag = true; //маркер по умолчанию 
		for (Criminal criminal : criminals)
		{
				if (criminal.Name != nickname.Name) { flag = false; }
				if (criminal.Surname != nickname.Surname) { flag = false; }
				if (criminal.Height != nickname.Height) { flag = false; }
				if (criminal.HairColor != nickname.HairColor) { flag = false; }
				if (criminal.EyeColor != nickname.EyeColor) { flag = false; }
				if (criminal.Citizenship != nickname.Citizenship) { flag = false; }
				if (criminal.PlaceBirth != nickname.PlaceBirth) { flag = false; }
				if (criminal.DateBirth != nickname.DateBirth) { flag = false; }
				if (criminal.Profession != nickname.Profession) { flag = false; }
				vector<string> langs1;
				vector<string> langs2;
				for (string lang : criminal.LanguageSkills)
				{
					langs2.push_back(lang);
				}
				for (string lang2 : nickname.LanguageSkills)
				{
					langs1.push_back(lang2);
					if (std::find(langs2.begin(), langs2.end(), lang2) == langs2.end())
					{
						flag = false;
					}
				}
				vector<string> special1;
				vector<string> special2;
				for (string special : criminal.SpecialSigns)
				{
					special2.push_back(special);
				}
				for (string spec2 : nickname.SpecialSigns)
				{
					langs1.push_back(spec2);
					if (std::find(special2.begin(), special2.end(), spec2) == special2.end())
					{
						flag = false;
					}
				}
				if (flag) { output.push_back(criminal); } //если удовлетворяет запросу поиска - помещение в выходной список
				flag = true; //возврат маркера в состояние по умолчанию
		}
		return output;
	}

	//метод для получения списка всех  преступников, которые удовлетворяют поиску по заданным параметрам преступника (перегрузка метода поиска)
	static vector<Criminal> FindCriminal(vector<Criminal> criminals, string sur, string name, string height, int height2, string hair, string eye, list<string> signssss, string city, string place, string date, list<string> langsss, string prof)
	{
		vector <Criminal> output;
		bool flag = true;
		for (Criminal criminal : criminals)
		{
			if (name != "") { if (criminal.Name != name) { flag = false; } }
			if (sur != "") { if (criminal.Surname != sur) { flag = false; } }
			if (height != "") { if (criminal.Height != height2) { flag = false; } }
			if (hair != "") { if (criminal.HairColor != hair) { flag = false; } }
			if (eye != "") { if (criminal.EyeColor != eye) { flag = false; } }
			if (city != "") { if (criminal.Citizenship != city) { flag = false; } }
			if (place != "") { if (criminal.PlaceBirth != place) { flag = false; } }
			if (date != "") { if (criminal.DateBirth != date) { flag = false; } }
			if (prof != "") { if (criminal.Profession != prof) { flag = false; } }
			if(!langsss.empty()) 
			{
				vector<string> langs1;
				vector<string> langs2;
				for (string lang : criminal.LanguageSkills)
				{
					langs2.push_back(lang);
				}
				for (string lang2 : langsss)
				{
					langs1.push_back(lang2);
					if (std::find(langs2.begin(), langs2.end(), lang2) == langs2.end())
					{
						flag = false;
					}
				}
			}
			if (!signssss.empty())
			{
				vector<string> special1;
				vector<string> special2;
				for (string special : criminal.SpecialSigns)
				{
					special2.push_back(special);
				}
				for (string spec2 : signssss)
				{
					special1.push_back(spec2);
					if (std::find(special2.begin(), special2.end(), spec2) == special2.end())
					{
						flag = false;
					}
				}
			}
			if (flag) { output.push_back(criminal); }
			flag = true;
		}
		return output;
	}

	//возвращает объект по никнейму 
	static Criminal GetObj(vector<Criminal> criminals, string nickname)
	{
		for (Criminal criminal : criminals)
		{
			if (criminal.NickName == nickname)
			{
				return criminal;
			}
		}
	}

	//удаляет из списка преступников преступника по указанному никнейму
	static vector<Criminal> Delete_Criminal(string nickname, vector<Criminal> criminals)
	{
		int count = 0;
		for (Criminal criminal : criminals)
		{
			count++;
			if (criminal.NickName == nickname)
			{
				auto iter = criminals.cbegin();
				criminals.erase(iter + count-1);
				break;
			}
		}
		return criminals;
		
	}
	//в дальнейшем метод может пригодиться - удаляет последнего преступника из списка
	static vector<Criminal> Delete_Criminal(vector<Criminal> criminals)
	{
		criminals.pop_back();
		return criminals;
	}
	//добавление преступника в конец списка
	static vector <Criminal> Add_Criminal(vector<Criminal> criminals, Criminal criminal)
	{
		criminals.push_back(criminal);
		return criminals;
	}

	//считывание архивных преступников из файла DateinterpolArchive.json
	static vector<Criminal> ReadBaseArcive() 
	{
		vector <Criminal> Archive_list; //создание сиска преступников в архиве "DateinterpolArchive.json"
		ifstream input_file; 
		string line;
		input_file.open("DateinterpolArchive.json"); //открытие файла на чтение
		nlohmann::json j{ }; //иницализация джисон-объекта
		if (input_file.is_open())
		{
			while (getline(input_file, line)) //считывание файла до конца построчно
			{
				//line = j.dump();
				nlohmann::json j = nlohmann::json::parse(line);
				Criminal criminal{}; //иницализация пустого объекта
				//заполнение полей объекта из созданного джисон объекта
				criminal.set_Surname(j["Surname"].get<string>());
				criminal.set_Name(j["Name"].get<string>());
				criminal.set_NickName(j["NickName"].get<string>());
				criminal.set_Height(j["Height"].get<int>());
				criminal.set_HairColor(j["HairColor"].get<string>());
				criminal.set_EyeColor(j["EyeColor"].get<string>());
				criminal.set_SpecialSigns(j["SpecialSigns"].get<list<string>>());
				criminal.set_Citizenship(j["Citizenship"].get<string>());
				criminal.set_PlaceBirth(j["PlaceBirth"].get<string>());
				criminal.set_DateBirth(j["DateBirth"].get<string>());
				criminal.set_LanguageSkills(j["LanguageSkills"].get<list<string>>());
				criminal.set_Profession(j["Profession"].get<string>());
				Archive_list.push_back(criminal); //запись в список объекта
			}
		}
		return Archive_list;

	}

	//считывание активных преступников из файла DateinterpolCriminals.json
	static vector<Criminal> ReadBaseCriminals()
	{
		vector <Criminal> Criminal_list; //создание списка преступников в архиве
		ifstream input_file; 
		string line;
		input_file.open("DateinterpolCriminals.json");//открытие файла на чтение
		nlohmann::json j{ };
		if (input_file.is_open()) 
		{
			while (getline(input_file, line)) //считывание файла до конца построчно
			{
				//line = j.dump();
				nlohmann::json j = nlohmann::json::parse(line);
				//иницализация пустого объекта
				//заполнение полей объекта из созданного джисон объекта
				Criminal criminal{};
				criminal.set_Surname(j["Surname"].get<string>());
				criminal.set_Name(j["Name"].get<string>());
				criminal.set_NickName(j["NickName"].get<string>());
				criminal.set_Height(j["Height"].get<int>());
				criminal.set_HairColor(j["HairColor"].get<string>());
				criminal.set_EyeColor(j["EyeColor"].get<string>());
				criminal.set_SpecialSigns(j["SpecialSigns"].get<list<string>>());
				criminal.set_Citizenship(j["Citizenship"].get<string>());
				criminal.set_PlaceBirth(j["PlaceBirth"].get<string>());
				criminal.set_DateBirth(j["DateBirth"].get<string>());
				criminal.set_LanguageSkills(j["LanguageSkills"].get<list<string>>());
				criminal.set_Profession(j["Profession"].get<string>());
				Criminal_list.push_back(criminal);//запись в список объекта
			}
		}
		return Criminal_list;
		
	}

	//вызов метода редактирования преступника
	static void EditCriminal(vector <Criminal> criminals, string nickname, Criminal crime)
	{
		//здесь будет запись в файл всего списка архив (перезапись)
		//удаление преступника по никнейму
		//добавление преступника по объекту
		//запись в базу активных преступников
		criminals = Criminal::Delete_Criminal(nickname, criminals);
		criminals = Criminal::Add_Criminal(criminals, crime);
		Criminal::WriteBaseCriminal(criminals);
	}

	//запись в базу архивных преступников
	static void WriteBaseArchive(vector <Criminal> archive)
	{
		ofstream input_file;
		input_file.open("DateinterpolArchive.json"); //открытие файла на запись
		if (input_file.is_open())
		{
			for (Criminal crime : archive)
			{	//инициализация пустого джисон объекта и заполнение его полей в соответствие с полями объекта преступник
				nlohmann::json j{};
				j["Surname"] = crime.Surname;
				j["Name"] = crime.Name;
				j["NickName"] = crime.NickName;
				j["Height"] = crime.Height;
				j["HairColor"] = crime.HairColor;
				j["EyeColor"] = crime.EyeColor;
				j["SpecialSigns"] = crime.SpecialSigns;
				j["Citizenship"] = crime.Citizenship;
				j["PlaceBirth"] = crime.PlaceBirth;
				j["DateBirth"] = crime.DateBirth;
				j["LanguageSkills"] = crime.LanguageSkills;
				j["Profession"] = crime.Profession;
				input_file << j << endl;
			}
		}
	}

	//запись в базу активных преступников
	static void WriteBaseCriminal(vector <Criminal> criminals)
	{
		{
			ofstream input_file;
			input_file.open("DateinterpolCriminals.json"); //открытие файла на запись
			if (input_file.is_open())
			{
				for (Criminal crime : criminals)
				{	//инициализация пустого джисон объекта и заполнение его полей в соответствие с полями объекта преступник
					nlohmann::json j{};
					j["Surname"] = crime.Surname;
					j["Name"] = crime.Name;
					j["NickName"] = crime.NickName;
					j["Height"] = crime.Height;
					j["HairColor"] = crime.HairColor;
					j["EyeColor"] = crime.EyeColor;
					j["SpecialSigns"] = crime.SpecialSigns;
					j["Citizenship"] = crime.Citizenship;
					j["PlaceBirth"] = crime.PlaceBirth;
					j["DateBirth"] = crime.DateBirth;
					j["LanguageSkills"] = crime.LanguageSkills;
					j["Profession"] = crime.Profession;
					input_file << j << endl;
				}
			}
		}
	}

	//получение списка всех никнеймов преступников в базе
	static vector<string> GetAllNickNames(vector<Criminal> criminals)
	{
		vector<string> allnicknames;
		for (int i=0; i<criminals.size(); i++)
		{
			allnicknames.push_back(criminals[i].NickName);
		}
		return allnicknames;
	} 
	
}; 
