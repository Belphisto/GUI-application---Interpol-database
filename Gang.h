#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <list>
#include <ctime>
#include <vector>
#include <nlohmann/json.hpp>
#include "Criminal.h"

using namespace std;

class Gang
{
private:
	string CriminalGang;
	list<string> Accomplices; //содержится список никнеймов преступников
	string TypeGang;
public:
	void set_CriminalGang(string _CriminalGang) { CriminalGang = _CriminalGang; }
	string get_CriminalGang() { return CriminalGang; }
	void set_Accomplices(list<string> _Accomplices) { Accomplices = _Accomplices; }
	list<string> get_Accomplices() { return Accomplices; }
	void set_TypeGang(string _TypeGang) { TypeGang = _TypeGang; }
	string get_TypeGang() { return TypeGang; }

	// инициализация объекта группировка
	Gang(string name, string type, list<string> str)
	{
		CriminalGang = name;
		TypeGang = type;
		Accomplices = str;
	}
	//иницализация пустого объекта
	Gang() {};

	//поиск названия группировки в списке группировок
	static bool FindGang(vector<Gang> gangs, string name)
	{
		bool flag = false;
		for (Gang gang : gangs)
		{
			if (gang.CriminalGang == name)
			{
				flag = true;
			}
		}
		return flag;
	}

	//получение списка всех преступников, если пресутпник есть в группировке.
	static vector<string> FindAccomplice(vector <Gang> gangs, string nickname)
	{
		vector<string> rez;
		bool marker = false;
		for (Gang gang : gangs)
		{
			for (string accompl : gang.get_Accomplices())
			{
				if (accompl == nickname)
				{
					marker = true;
				}
			}
			if (marker)
			{
				for (string acc : gang.get_Accomplices())
				{
					rez.push_back(acc);
					marker = false;
				}
			}
		}
		return rez;
	}

	//удаление преступника по никнейму из всех группировок
	static vector<Gang> DeleteMember(vector <Gang> gangs, string nickname)
	{
		list<string> acc; 
		vector <Gang> newListGang;
		vector<Gang> gangforDelete;
		vector<string> names;
		int c = 0;
		bool marker = false;
		for (Gang gang : gangs)
		{
			for (string accompl : gang.Accomplices)
			{
				if (accompl == nickname) //если никнейм найден в списке участников
				{
					gangforDelete.push_back(gang); //добавить группировку как объект в список для редактирования
					names.push_back(gang.CriminalGang); //добавить название группировки в список для редактирования
				}
			}
		}
		for (Gang gangDelete : gangforDelete) //для каждого объекта группировка для редактирования
		{
			list<string> newAccc; //иницацлизация списка преступников
			newAccc.merge(gangDelete.Accomplices);
			newAccc.remove(nickname); //запись списка преступников без никнейма для удаления
			Gang newgang = Gang(gangDelete.CriminalGang, gangDelete.TypeGang, newAccc); //инициализация преступной группировки
			newListGang.push_back(newgang); //добавление преступной группировки
			gangs = Gang::Delete_Gang(gangs, names[names.size() - 1]); //удаление из списка старой преступной группировки
			names.pop_back();
			gangs = Gang::Add_Gang(gangs, newgang); //запись в список новой преступной группировки без никнейма к удалению
		}

		return gangs;
	}

	//удаление группировки из списка
	static vector<Gang> Delete_Gang(vector<Gang> gangs, string name)
	{
		int count = 0;
		for (Gang gang : gangs)
		{
			count++;
			if (gang.CriminalGang == name)
			{
				auto iter = gangs.cbegin();
				gangs.erase(iter + count - 1);
				break;
			}
		}
		return gangs;
	}

	//добавление группировки в список
	static vector <Gang> Add_Gang(vector<Gang> gangs, Gang gang)
	{
		gangs.push_back(gang);
		return gangs;
	}

	//считывание базы преступных группировок
	static vector<Gang> ReadBaseGangs()
	{
		vector <Gang> Gang_list; //создание сиска группировок
		string Gang_line;
		ifstream input_file;
		input_file.open("DateinterpolGangs.json"); //открытие файла на чтение
		nlohmann::json j{ };
		if (input_file.is_open())
		{
			while (getline(input_file, Gang_line)) //считывание файла до конца построчно
			{
				nlohmann::json j = nlohmann::json::parse(Gang_line);
				//иницализация пустого объекта
				//заполнение полей объекта из созданного джисон объекта
				Gang gang{};
				gang.set_CriminalGang(j["CriminalGang"].get<string>());
				gang.set_TypeGang(j["TypeGang"].get<string>());
				gang.set_Accomplices(j["Accomplices"].get<list<string>>());
				Gang_list.push_back(gang); //запись в список объекта
			}

		}
		return Gang_list;
	}

	//запись в базу преступных группировок
	static void WriteBaseGang(vector <Gang> gangs)
	{
		ofstream file;
		ofstream out;
		out.open("DateinterpolGangs2.json"); //открытие файла на запись
		if (out.is_open())
		{
			for (Gang gang : gangs)
			{//инициализация пустого джисон объекта и заполнение его полей в соответствие с полями объекта группировка
				nlohmann::json j{};
				j["CriminalGang"] = gang.CriminalGang;
				j["TypeGang"] = gang.TypeGang;
				j["Accomplices"] = gang.Accomplices;
				out << j << endl;
			}
		}
		file.close();
		out.close();
		remove("DateinterpolGangs.json"); //удаление файла
		rename("DateinterpolGangs2.json", "DateinterpolGangs.json"); //переименование файла
	}

	//получение списка всех названий преступных группировок
	static vector<string> GetAllGangs(vector<Gang> gangs) 
	{
		vector<string> allgangs;
		for (int i = 0; i < gangs.size(); i++)
		{
			allgangs.push_back(gangs[i].CriminalGang);
		}
		return allgangs;
	}

};
