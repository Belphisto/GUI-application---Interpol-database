#pragma once
#include "Criminal.h"
#include "Gang.h"
#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <ctime>
#include <vector>
#include <msclr\marshal.h>
#include <msclr/marshal_cppstd.h>
#include <list>

namespace InterpolCabinet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop; 
	/// <summary>
	/// Сводка для ArchiveWindow
	/// </summary>
	public ref class ArchiveWindow : public System::Windows::Forms::Form
	{
	public:
		ArchiveWindow(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~ArchiveWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ ViewArchive;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1_name;
	private: System::Windows::Forms::Label^ label1_UserHint;
	private: System::Windows::Forms::Button^ button1_GetList;
	private: System::Windows::Forms::Button^ button2_Delete;


	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ArchiveWindow::typeid));
			this->ViewArchive = (gcnew System::Windows::Forms::ListBox());
			this->label1_name = (gcnew System::Windows::Forms::Label());
			this->label1_UserHint = (gcnew System::Windows::Forms::Label());
			this->button1_GetList = (gcnew System::Windows::Forms::Button());
			this->button2_Delete = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// ViewArchive
			// 
			this->ViewArchive->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ViewArchive->FormattingEnabled = true;
			this->ViewArchive->ItemHeight = 12;
			this->ViewArchive->Location = System::Drawing::Point(333, 59);
			this->ViewArchive->Name = L"ViewArchive";
			this->ViewArchive->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ViewArchive->ScrollAlwaysVisible = true;
			this->ViewArchive->Size = System::Drawing::Size(502, 328);
			this->ViewArchive->TabIndex = 0;
			this->ViewArchive->SelectedIndexChanged += gcnew System::EventHandler(this, &ArchiveWindow::ViewArchive_SelectedIndexChanged);
			// 
			// label1_name
			// 
			this->label1_name->AutoSize = true;
			this->label1_name->Font = (gcnew System::Drawing::Font(L"Anime Ace v05", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1_name->Location = System::Drawing::Point(12, 9);
			this->label1_name->Name = L"label1_name";
			this->label1_name->Size = System::Drawing::Size(584, 36);
			this->label1_name->TabIndex = 1;
			this->label1_name->Text = L"Данные Архива Интерпола";
			// 
			// label1_UserHint
			// 
			this->label1_UserHint->AutoSize = true;
			this->label1_UserHint->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1_UserHint->Location = System::Drawing::Point(59, 289);
			this->label1_UserHint->Name = L"label1_UserHint";
			this->label1_UserHint->Size = System::Drawing::Size(210, 52);
			this->label1_UserHint->TabIndex = 2;
			this->label1_UserHint->Text = L"Если человек умер:\r\n-  выведите список архива;\r\n-  выберите запись в списке;\r\n-  "
				L"нажмите кнопку \"удалить\".";
			// 
			// button1_GetList
			// 
			this->button1_GetList->Font = (gcnew System::Drawing::Font(L"Anime Ace v05", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1_GetList->Location = System::Drawing::Point(28, 59);
			this->button1_GetList->Name = L"button1_GetList";
			this->button1_GetList->Size = System::Drawing::Size(290, 31);
			this->button1_GetList->TabIndex = 3;
			this->button1_GetList->Text = L"Получить записи";
			this->button1_GetList->UseVisualStyleBackColor = true;
			this->button1_GetList->Click += gcnew System::EventHandler(this, &ArchiveWindow::button1_GetList_Click);
			// 
			// button2_Delete
			// 
			this->button2_Delete->Font = (gcnew System::Drawing::Font(L"Anime Ace v05", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2_Delete->Location = System::Drawing::Point(28, 356);
			this->button2_Delete->Name = L"button2_Delete";
			this->button2_Delete->Size = System::Drawing::Size(290, 31);
			this->button2_Delete->TabIndex = 4;
			this->button2_Delete->Text = L"Удалить";
			this->button2_Delete->UseVisualStyleBackColor = true;
			this->button2_Delete->Click += gcnew System::EventHandler(this, &ArchiveWindow::button2_Delete_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(28, 96);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(290, 190);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// ArchiveWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(847, 399);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2_Delete);
			this->Controls->Add(this->button1_GetList);
			this->Controls->Add(this->label1_UserHint);
			this->Controls->Add(this->label1_name);
			this->Controls->Add(this->ViewArchive);
			this->Name = L"ArchiveWindow";
			this->Text = L"ArchiveWindow";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &ArchiveWindow::ArchiveWindow_FormClosing);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_GetList_Click(System::Object^ sender, System::EventArgs^ e) {
		vector<Criminal> listcrime = Criminal::ReadBaseArcive(); //чтение списка преступников из базы завязавших преступников
		if (listcrime.empty())
		{
			System::Windows::Forms::MessageBox::Show("Раздел -архив- Картотеки Интерпола пуст. Пожалуйста, добавьте запись", "", MessageBoxButtons::OK);
		}
		else //если база не пуста
		{
			for (Criminal criminals : listcrime) 
				//для каждого преступника из базы - вывод в форму для пользователя с приведением типов полей класса в тип, пригодный для отображения в форме
			{
				Criminal criminal = criminals;
				String^ enterString;
				enterString += gcnew String(criminal.get_NickName().c_str());
				ViewArchive->Items->Add(enterString);
				enterString = "";
				enterString += "Фамилия:	";
				enterString += gcnew String(criminal.get_Surname().c_str());
				ViewArchive->Items->Add(enterString);
				enterString = "";
				enterString += "Имя:	";
				enterString += gcnew String(criminal.get_Name().c_str());
				ViewArchive->Items->Add(enterString);
				enterString = "";
				enterString += "Рост:	";
				enterString += gcnew String(criminal.get_Height().ToString());
				ViewArchive->Items->Add(enterString);
				enterString = "";
				enterString += "Цвет волос:		";
				enterString += gcnew String(criminal.get_HairColor().c_str());
				ViewArchive->Items->Add(enterString);
				enterString = "";
				enterString += "Цвет глаз:	";
				enterString += gcnew String(criminal.get_EyeColor().c_str());
				ViewArchive->Items->Add(enterString);
				enterString = "";
				enterString += "Гражданство:	";
				enterString += gcnew String(criminal.get_Citizenship().c_str());
				ViewArchive->Items->Add(enterString);
				enterString = "";
				enterString += "Место рождения:		";
				enterString += gcnew String(criminal.get_PlaceBirth().c_str());
				ViewArchive->Items->Add(enterString);
				enterString = "";
				enterString += "Дата рождения:	";
				enterString += gcnew String(criminal.get_DateBirth().c_str());
				ViewArchive->Items->Add(enterString);
				enterString = "";
				enterString += "Профессия:	";
				enterString += gcnew String(criminal.get_Profession().c_str());
				ViewArchive->Items->Add(enterString);
				enterString = "";
				enterString += "особые приметы:		";
				for (string signs : criminal.get_SpecialSigns())
				{
					string sign = signs;
					enterString += gcnew String(sign.c_str());
					enterString += "   ";
				}
				ViewArchive->Items->Add(enterString);
				enterString = "знание языков:	";
				for (string langs : criminal.get_LanguageSkills())
				{
					string lang = langs;
					enterString += gcnew String(lang.c_str());
					enterString += "   ";
				}
				ViewArchive->Items->Add(enterString);
				enterString = "   ";
				ViewArchive->Items->Add(enterString);
				enterString = "   ";
				ViewArchive->Items->Add(enterString);
			}
		}
		
	}
	private: System::Void button2_Delete_Click(System::Object^ sender, System::EventArgs^ e) {
		int index = ViewArchive->SelectedIndex;
		if (index != -1) //если никнейм преступника выбран 
		{
			string NickName = marshal_as<string>((ViewArchive->SelectedItem)->ToString());
			vector<Criminal> listcrime = Criminal::ReadBaseArcive(); //считать базу преступников
			vector<Gang> listGang = Gang::ReadBaseGangs(); //считать базу группировок
			vector<Gang> listGang2;
			if (Criminal::Find(listcrime, NickName)) //дополнительная проверка наличия преступника в базе на случай непредвиденной ошибки
			{ 
				vector<Criminal> listcrime2 = Criminal::Delete_Criminal(NickName, listcrime); //удалить его из всех группировок
				Criminal::WriteBaseArchive(listcrime2); //считать базу архива
				vector<string> Accomp = Gang::FindAccomplice(listGang, NickName); //получение списка всех подельщиков преступника
				if (Accomp.empty()) //если у преступника нет подельщиков
				{
					System::Windows::Forms::MessageBox::Show("Данные о преступнике успешно удалены", "",
						MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				}
				else //если у преступника есть подельщики
				{
					vector<Gang> listGang2 = Gang::DeleteMember(listGang, NickName); //обновить базу группировок, удалив из каждой группировки никнейм удаляемого преступника
					Gang::WriteBaseGang(listGang2); //записать обновленную базу группировок в файл
					System::Windows::Forms::MessageBox::Show("Данные о преступнике успешно удалены и из всех группировок", "",
						MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				}
				//обновить текущую форму для корректного отображения данных по запросу пользователя на форме
				ArchiveWindow^ f = gcnew ArchiveWindow(); 
				f->Owner = this->Owner;
				this->Close();
				f->Show(); 
			}
			else {
				System::Windows::Forms::MessageBox::Show("Пожалуйста, выберите прозвище преступника и повторите попытку", "",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else
		{
			System::Windows::Forms::MessageBox::Show("Пожалуйста, выберите из списка прозвище человека (свободный заголовок), который уже умер",
				"", MessageBoxButtons::OK);
		}
	}

	private: System::Void ArchiveWindow_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		Form^ form = this->Owner;
		form->Enabled = true; //делает главную форму снова доступной при закрытии
	}

	private: System::Void ViewArchive_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
	};
}
