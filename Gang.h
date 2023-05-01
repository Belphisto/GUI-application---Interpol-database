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
	list<string> Accomplices; //���������� ������ ��������� ������������
	string TypeGang;
public:
	void set_CriminalGang(string _CriminalGang) { CriminalGang = _CriminalGang; }
	string get_CriminalGang() { return CriminalGang; }
	void set_Accomplices(list<string> _Accomplices) { Accomplices = _Accomplices; }
	list<string> get_Accomplices() { return Accomplices; }
	void set_TypeGang(string _TypeGang) { TypeGang = _TypeGang; }
	string get_TypeGang() { return TypeGang; }

	// ������������� ������� �����������
	Gang(string name, string type, list<string> str)
	{
		CriminalGang = name;
		TypeGang = type;
		Accomplices = str;
	}
	//������������ ������� �������
	Gang() {};

	//����� �������� ����������� � ������ �����������
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

	//��������� ������ ���� ������������, ���� ���������� ���� � �����������.
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

	//�������� ����������� �� �������� �� ���� �����������
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
				if (accompl == nickname) //���� ������� ������ � ������ ����������
				{
					gangforDelete.push_back(gang); //�������� ����������� ��� ������ � ������ ��� ��������������
					names.push_back(gang.CriminalGang); //�������� �������� ����������� � ������ ��� ��������������
				}
			}
		}
		for (Gang gangDelete : gangforDelete) //��� ������� ������� ����������� ��� ��������������
		{
			list<string> newAccc; //������������� ������ ������������
			newAccc.merge(gangDelete.Accomplices);
			newAccc.remove(nickname); //������ ������ ������������ ��� �������� ��� ��������
			Gang newgang = Gang(gangDelete.CriminalGang, gangDelete.TypeGang, newAccc); //������������� ���������� �����������
			newListGang.push_back(newgang); //���������� ���������� �����������
			gangs = Gang::Delete_Gang(gangs, names[names.size() - 1]); //�������� �� ������ ������ ���������� �����������
			names.pop_back();
			gangs = Gang::Add_Gang(gangs, newgang); //������ � ������ ����� ���������� ����������� ��� �������� � ��������
		}

		return gangs;
	}

	//�������� ����������� �� ������
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

	//���������� ����������� � ������
	static vector <Gang> Add_Gang(vector<Gang> gangs, Gang gang)
	{
		gangs.push_back(gang);
		return gangs;
	}

	//���������� ���� ���������� �����������
	static vector<Gang> ReadBaseGangs()
	{
		vector <Gang> Gang_list; //�������� ����� �����������
		string Gang_line;
		ifstream input_file;
		input_file.open("DateinterpolGangs.json"); //�������� ����� �� ������
		nlohmann::json j{ };
		if (input_file.is_open())
		{
			while (getline(input_file, Gang_line)) //���������� ����� �� ����� ���������
			{
				nlohmann::json j = nlohmann::json::parse(Gang_line);
				//������������ ������� �������
				//���������� ����� ������� �� ���������� ������ �������
				Gang gang{};
				gang.set_CriminalGang(j["CriminalGang"].get<string>());
				gang.set_TypeGang(j["TypeGang"].get<string>());
				gang.set_Accomplices(j["Accomplices"].get<list<string>>());
				Gang_list.push_back(gang); //������ � ������ �������
			}

		}
		return Gang_list;
	}

	//������ � ���� ���������� �����������
	static void WriteBaseGang(vector <Gang> gangs)
	{
		ofstream file;
		ofstream out;
		out.open("DateinterpolGangs2.json"); //�������� ����� �� ������
		if (out.is_open())
		{
			for (Gang gang : gangs)
			{//������������� ������� ������ ������� � ���������� ��� ����� � ������������ � ������ ������� �����������
				nlohmann::json j{};
				j["CriminalGang"] = gang.CriminalGang;
				j["TypeGang"] = gang.TypeGang;
				j["Accomplices"] = gang.Accomplices;
				out << j << endl;
			}
		}
		file.close();
		out.close();
		remove("DateinterpolGangs.json"); //�������� �����
		rename("DateinterpolGangs2.json", "DateinterpolGangs.json"); //�������������� �����
	}

	//��������� ������ ���� �������� ���������� �����������
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
