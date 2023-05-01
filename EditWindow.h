#pragma once
#include <msclr\marshal.h>
#include <msclr/marshal_cppstd.h>
#include "Gang.h"
#include "Criminal.h"
#include <boost/algorithm/string/split.hpp>
#include <boost/algorithm/string.hpp>
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <list>

namespace InterpolCabinet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	using namespace boost;

	/// <summary>
	/// Сводка для EditWindow
	/// </summary>
	public ref class EditWindow : public System::Windows::Forms::Form
	{
	public:
		EditWindow(void)
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
		~EditWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_nameWindow;
	private: System::Windows::Forms::Label^ label_nickname;
	private: System::Windows::Forms::Label^ label_infForCriminal;

	private: System::Windows::Forms::Label^ label_name;
	private: System::Windows::Forms::Label^ label_surname;
	private: System::Windows::Forms::Label^ label_haircolor;
	private: System::Windows::Forms::Label^ label_eyecolor;
	private: System::Windows::Forms::Label^ label_height;
	private: System::Windows::Forms::Label^ label_placebirth;
	private: System::Windows::Forms::Label^ label_datebirth;
	private: System::Windows::Forms::Label^ label_citizenship;

	private: System::Windows::Forms::Label^ label_profession;
	private: System::Windows::Forms::Label^ label_langskills;
	private: System::Windows::Forms::Label^ label_specialsigns;
	private: System::Windows::Forms::TextBox^ NameBox;
	private: System::Windows::Forms::TextBox^ SurNameBox;
	private: System::Windows::Forms::TextBox^ HairColorBox;
	private: System::Windows::Forms::TextBox^ EyeColorBox;
	private: System::Windows::Forms::MaskedTextBox^ HeightMaskedBox;
	private: System::Windows::Forms::TextBox^ PlaceBirthBox;
	private: System::Windows::Forms::MaskedTextBox^ DateBirthMaskedBox;
	private: System::Windows::Forms::TextBox^ CitizenshipBox;

	private: System::Windows::Forms::TextBox^ ProfessionBox;
	private: System::Windows::Forms::TextBox^ LangSkillsBox;
	private: System::Windows::Forms::TextBox^ SpecialSignsBox;
	private: System::Windows::Forms::Button^ UpdateNewCriminalButton;

	private: System::Windows::Forms::ListBox^ NickNameListBox;












	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ DeathButton;
	private: System::Windows::Forms::Button^ ArchiveButton;
	private: System::Windows::Forms::Label^ label1;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EditWindow::typeid));
			this->label_nameWindow = (gcnew System::Windows::Forms::Label());
			this->label_nickname = (gcnew System::Windows::Forms::Label());
			this->label_infForCriminal = (gcnew System::Windows::Forms::Label());
			this->label_name = (gcnew System::Windows::Forms::Label());
			this->label_surname = (gcnew System::Windows::Forms::Label());
			this->label_haircolor = (gcnew System::Windows::Forms::Label());
			this->label_eyecolor = (gcnew System::Windows::Forms::Label());
			this->label_height = (gcnew System::Windows::Forms::Label());
			this->label_placebirth = (gcnew System::Windows::Forms::Label());
			this->label_datebirth = (gcnew System::Windows::Forms::Label());
			this->label_citizenship = (gcnew System::Windows::Forms::Label());
			this->label_profession = (gcnew System::Windows::Forms::Label());
			this->label_langskills = (gcnew System::Windows::Forms::Label());
			this->label_specialsigns = (gcnew System::Windows::Forms::Label());
			this->NameBox = (gcnew System::Windows::Forms::TextBox());
			this->SurNameBox = (gcnew System::Windows::Forms::TextBox());
			this->HairColorBox = (gcnew System::Windows::Forms::TextBox());
			this->EyeColorBox = (gcnew System::Windows::Forms::TextBox());
			this->HeightMaskedBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->PlaceBirthBox = (gcnew System::Windows::Forms::TextBox());
			this->DateBirthMaskedBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->CitizenshipBox = (gcnew System::Windows::Forms::TextBox());
			this->ProfessionBox = (gcnew System::Windows::Forms::TextBox());
			this->LangSkillsBox = (gcnew System::Windows::Forms::TextBox());
			this->SpecialSignsBox = (gcnew System::Windows::Forms::TextBox());
			this->UpdateNewCriminalButton = (gcnew System::Windows::Forms::Button());
			this->NickNameListBox = (gcnew System::Windows::Forms::ListBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->DeathButton = (gcnew System::Windows::Forms::Button());
			this->ArchiveButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label_nameWindow
			// 
			this->label_nameWindow->AutoSize = true;
			this->label_nameWindow->Font = (gcnew System::Drawing::Font(L"Anime Ace v05", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_nameWindow->Location = System::Drawing::Point(12, 9);
			this->label_nameWindow->Name = L"label_nameWindow";
			this->label_nameWindow->Size = System::Drawing::Size(669, 72);
			this->label_nameWindow->TabIndex = 1;
			this->label_nameWindow->Text = L"Редактирование преступного\r\nобъекта";
			// 
			// label_nickname
			// 
			this->label_nickname->AutoSize = true;
			this->label_nickname->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_nickname->Location = System::Drawing::Point(15, 124);
			this->label_nickname->Name = L"label_nickname";
			this->label_nickname->Size = System::Drawing::Size(78, 13);
			this->label_nickname->TabIndex = 7;
			this->label_nickname->Text = L"Прозвище: ";
			// 
			// label_infForCriminal
			// 
			this->label_infForCriminal->AutoSize = true;
			this->label_infForCriminal->Font = (gcnew System::Drawing::Font(L"Anime Ace v05", 9, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_infForCriminal->Location = System::Drawing::Point(15, 99);
			this->label_infForCriminal->Name = L"label_infForCriminal";
			this->label_infForCriminal->Size = System::Drawing::Size(329, 14);
			this->label_infForCriminal->TabIndex = 8;
			this->label_infForCriminal->Text = L"Найти преступника для редактирования";
			// 
			// label_name
			// 
			this->label_name->AutoSize = true;
			this->label_name->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_name->Location = System::Drawing::Point(15, 165);
			this->label_name->Name = L"label_name";
			this->label_name->Size = System::Drawing::Size(44, 13);
			this->label_name->TabIndex = 10;
			this->label_name->Text = L"Имя: ";
			// 
			// label_surname
			// 
			this->label_surname->AutoSize = true;
			this->label_surname->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_surname->Location = System::Drawing::Point(15, 189);
			this->label_surname->Name = L"label_surname";
			this->label_surname->Size = System::Drawing::Size(79, 13);
			this->label_surname->TabIndex = 11;
			this->label_surname->Text = L"Фамилия: ";
			// 
			// label_haircolor
			// 
			this->label_haircolor->AutoSize = true;
			this->label_haircolor->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_haircolor->Location = System::Drawing::Point(15, 217);
			this->label_haircolor->Name = L"label_haircolor";
			this->label_haircolor->Size = System::Drawing::Size(94, 13);
			this->label_haircolor->TabIndex = 12;
			this->label_haircolor->Text = L"Цвет волос: ";
			// 
			// label_eyecolor
			// 
			this->label_eyecolor->AutoSize = true;
			this->label_eyecolor->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_eyecolor->Location = System::Drawing::Point(15, 243);
			this->label_eyecolor->Name = L"label_eyecolor";
			this->label_eyecolor->Size = System::Drawing::Size(83, 13);
			this->label_eyecolor->TabIndex = 13;
			this->label_eyecolor->Text = L"Цвет глаз: ";
			// 
			// label_height
			// 
			this->label_height->AutoSize = true;
			this->label_height->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_height->Location = System::Drawing::Point(15, 271);
			this->label_height->Name = L"label_height";
			this->label_height->Size = System::Drawing::Size(102, 13);
			this->label_height->TabIndex = 14;
			this->label_height->Text = L"Рост (в см): ";
			// 
			// label_placebirth
			// 
			this->label_placebirth->AutoSize = true;
			this->label_placebirth->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_placebirth->Location = System::Drawing::Point(15, 297);
			this->label_placebirth->Name = L"label_placebirth";
			this->label_placebirth->Size = System::Drawing::Size(133, 13);
			this->label_placebirth->TabIndex = 15;
			this->label_placebirth->Text = L"Место рождения: ";
			// 
			// label_datebirth
			// 
			this->label_datebirth->AutoSize = true;
			this->label_datebirth->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_datebirth->Location = System::Drawing::Point(15, 324);
			this->label_datebirth->Name = L"label_datebirth";
			this->label_datebirth->Size = System::Drawing::Size(221, 13);
			this->label_datebirth->TabIndex = 16;
			this->label_datebirth->Text = L"Дата рождения (дд.мм.гггг): ";
			// 
			// label_citizenship
			// 
			this->label_citizenship->AutoSize = true;
			this->label_citizenship->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_citizenship->Location = System::Drawing::Point(15, 352);
			this->label_citizenship->Name = L"label_citizenship";
			this->label_citizenship->Size = System::Drawing::Size(108, 13);
			this->label_citizenship->TabIndex = 17;
			this->label_citizenship->Text = L"Гражданство: ";
			// 
			// label_profession
			// 
			this->label_profession->AutoSize = true;
			this->label_profession->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_profession->Location = System::Drawing::Point(15, 383);
			this->label_profession->Name = L"label_profession";
			this->label_profession->Size = System::Drawing::Size(170, 13);
			this->label_profession->TabIndex = 19;
			this->label_profession->Text = L"Преступная профессия: ";
			// 
			// label_langskills
			// 
			this->label_langskills->AutoSize = true;
			this->label_langskills->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_langskills->Location = System::Drawing::Point(15, 418);
			this->label_langskills->Name = L"label_langskills";
			this->label_langskills->Size = System::Drawing::Size(265, 26);
			this->label_langskills->TabIndex = 20;
			this->label_langskills->Text = L"Знание языков: \r\n(введите через /, если их несколько)";
			// 
			// label_specialsigns
			// 
			this->label_specialsigns->AutoSize = true;
			this->label_specialsigns->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_specialsigns->Location = System::Drawing::Point(15, 465);
			this->label_specialsigns->Name = L"label_specialsigns";
			this->label_specialsigns->Size = System::Drawing::Size(265, 26);
			this->label_specialsigns->TabIndex = 21;
			this->label_specialsigns->Text = L"Особые приметы:\r\n(введите через /, если их несколько)";
			// 
			// NameBox
			// 
			this->NameBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NameBox->Location = System::Drawing::Point(58, 163);
			this->NameBox->Multiline = true;
			this->NameBox->Name = L"NameBox";
			this->NameBox->Size = System::Drawing::Size(281, 20);
			this->NameBox->TabIndex = 22;
			// 
			// SurNameBox
			// 
			this->SurNameBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SurNameBox->Location = System::Drawing::Point(87, 188);
			this->SurNameBox->Multiline = true;
			this->SurNameBox->Name = L"SurNameBox";
			this->SurNameBox->Size = System::Drawing::Size(252, 20);
			this->SurNameBox->TabIndex = 23;
			// 
			// HairColorBox
			// 
			this->HairColorBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->HairColorBox->Location = System::Drawing::Point(115, 214);
			this->HairColorBox->Multiline = true;
			this->HairColorBox->Name = L"HairColorBox";
			this->HairColorBox->Size = System::Drawing::Size(224, 20);
			this->HairColorBox->TabIndex = 24;
			// 
			// EyeColorBox
			// 
			this->EyeColorBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EyeColorBox->Location = System::Drawing::Point(115, 239);
			this->EyeColorBox->Multiline = true;
			this->EyeColorBox->Name = L"EyeColorBox";
			this->EyeColorBox->Size = System::Drawing::Size(224, 20);
			this->EyeColorBox->TabIndex = 25;
			// 
			// HeightMaskedBox
			// 
			this->HeightMaskedBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v05", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->HeightMaskedBox->Location = System::Drawing::Point(115, 266);
			this->HeightMaskedBox->Mask = L"999";
			this->HeightMaskedBox->Name = L"HeightMaskedBox";
			this->HeightMaskedBox->Size = System::Drawing::Size(38, 21);
			this->HeightMaskedBox->TabIndex = 42;
			this->HeightMaskedBox->ValidatingType = System::Int32::typeid;
			// 
			// PlaceBirthBox
			// 
			this->PlaceBirthBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PlaceBirthBox->Location = System::Drawing::Point(145, 290);
			this->PlaceBirthBox->Multiline = true;
			this->PlaceBirthBox->Name = L"PlaceBirthBox";
			this->PlaceBirthBox->Size = System::Drawing::Size(194, 20);
			this->PlaceBirthBox->TabIndex = 43;
			// 
			// DateBirthMaskedBox
			// 
			this->DateBirthMaskedBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v05", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DateBirthMaskedBox->Location = System::Drawing::Point(229, 317);
			this->DateBirthMaskedBox->Mask = L"00/00/0000";
			this->DateBirthMaskedBox->Name = L"DateBirthMaskedBox";
			this->DateBirthMaskedBox->Size = System::Drawing::Size(81, 21);
			this->DateBirthMaskedBox->TabIndex = 44;
			// 
			// CitizenshipBox
			// 
			this->CitizenshipBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CitizenshipBox->Location = System::Drawing::Point(121, 346);
			this->CitizenshipBox->Multiline = true;
			this->CitizenshipBox->Name = L"CitizenshipBox";
			this->CitizenshipBox->Size = System::Drawing::Size(218, 20);
			this->CitizenshipBox->TabIndex = 45;
			// 
			// ProfessionBox
			// 
			this->ProfessionBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ProfessionBox->Location = System::Drawing::Point(181, 379);
			this->ProfessionBox->Multiline = true;
			this->ProfessionBox->Name = L"ProfessionBox";
			this->ProfessionBox->Size = System::Drawing::Size(175, 20);
			this->ProfessionBox->TabIndex = 47;
			// 
			// LangSkillsBox
			// 
			this->LangSkillsBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LangSkillsBox->Location = System::Drawing::Point(131, 410);
			this->LangSkillsBox->Multiline = true;
			this->LangSkillsBox->Name = L"LangSkillsBox";
			this->LangSkillsBox->Size = System::Drawing::Size(225, 20);
			this->LangSkillsBox->TabIndex = 48;
			// 
			// SpecialSignsBox
			// 
			this->SpecialSignsBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SpecialSignsBox->Location = System::Drawing::Point(141, 456);
			this->SpecialSignsBox->Multiline = true;
			this->SpecialSignsBox->Name = L"SpecialSignsBox";
			this->SpecialSignsBox->Size = System::Drawing::Size(215, 20);
			this->SpecialSignsBox->TabIndex = 49;
			// 
			// UpdateNewCriminalButton
			// 
			this->UpdateNewCriminalButton->Font = (gcnew System::Drawing::Font(L"Anime Ace v05", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->UpdateNewCriminalButton->Location = System::Drawing::Point(30, 514);
			this->UpdateNewCriminalButton->Name = L"UpdateNewCriminalButton";
			this->UpdateNewCriminalButton->Size = System::Drawing::Size(299, 39);
			this->UpdateNewCriminalButton->TabIndex = 50;
			this->UpdateNewCriminalButton->Text = L"Обновить информацию о преступнике";
			this->UpdateNewCriminalButton->UseVisualStyleBackColor = true;
			this->UpdateNewCriminalButton->Click += gcnew System::EventHandler(this, &EditWindow::UpdateNewCriminalButton_Click);
			// 
			// NickNameListBox
			// 
			this->NickNameListBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NickNameListBox->FormattingEnabled = true;
			this->NickNameListBox->Location = System::Drawing::Point(87, 124);
			this->NickNameListBox->Name = L"NickNameListBox";
			this->NickNameListBox->ScrollAlwaysVisible = true;
			this->NickNameListBox->Size = System::Drawing::Size(252, 30);
			this->NickNameListBox->TabIndex = 51;
			this->NickNameListBox->SelectedIndexChanged += gcnew System::EventHandler(this, &EditWindow::NickNameListBox_SelectedIndexChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(406, 117);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(397, 499);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 61;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &EditWindow::pictureBox1_Click);
			// 
			// DeathButton
			// 
			this->DeathButton->Font = (gcnew System::Drawing::Font(L"Anime Ace v05", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DeathButton->Location = System::Drawing::Point(18, 577);
			this->DeathButton->Name = L"DeathButton";
			this->DeathButton->Size = System::Drawing::Size(130, 39);
			this->DeathButton->TabIndex = 62;
			this->DeathButton->Text = L"Умер";
			this->DeathButton->UseVisualStyleBackColor = true;
			this->DeathButton->Click += gcnew System::EventHandler(this, &EditWindow::DeathButton_Click);
			// 
			// ArchiveButton
			// 
			this->ArchiveButton->Font = (gcnew System::Drawing::Font(L"Anime Ace v05", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ArchiveButton->Location = System::Drawing::Point(183, 577);
			this->ArchiveButton->Name = L"ArchiveButton";
			this->ArchiveButton->Size = System::Drawing::Size(134, 39);
			this->ArchiveButton->TabIndex = 63;
			this->ArchiveButton->Text = L"Завязал";
			this->ArchiveButton->UseVisualStyleBackColor = true;
			this->ArchiveButton->Click += gcnew System::EventHandler(this, &EditWindow::ArchiveButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(214, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(482, 13);
			this->label1->TabIndex = 64;
			this->label1->Text = L"Пожалуйста, используйте латинские символы при внесении изменений.\r\n";
			// 
			// EditWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(847, 664);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ArchiveButton);
			this->Controls->Add(this->DeathButton);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->NickNameListBox);
			this->Controls->Add(this->UpdateNewCriminalButton);
			this->Controls->Add(this->SpecialSignsBox);
			this->Controls->Add(this->LangSkillsBox);
			this->Controls->Add(this->ProfessionBox);
			this->Controls->Add(this->CitizenshipBox);
			this->Controls->Add(this->DateBirthMaskedBox);
			this->Controls->Add(this->PlaceBirthBox);
			this->Controls->Add(this->HeightMaskedBox);
			this->Controls->Add(this->EyeColorBox);
			this->Controls->Add(this->HairColorBox);
			this->Controls->Add(this->SurNameBox);
			this->Controls->Add(this->NameBox);
			this->Controls->Add(this->label_specialsigns);
			this->Controls->Add(this->label_langskills);
			this->Controls->Add(this->label_profession);
			this->Controls->Add(this->label_citizenship);
			this->Controls->Add(this->label_datebirth);
			this->Controls->Add(this->label_placebirth);
			this->Controls->Add(this->label_height);
			this->Controls->Add(this->label_eyecolor);
			this->Controls->Add(this->label_haircolor);
			this->Controls->Add(this->label_surname);
			this->Controls->Add(this->label_name);
			this->Controls->Add(this->label_infForCriminal);
			this->Controls->Add(this->label_nickname);
			this->Controls->Add(this->label_nameWindow);
			this->Name = L"EditWindow";
			this->Text = L"EditWindow";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &EditWindow::EditWindow_FormClosing);
			this->Load += gcnew System::EventHandler(this, &EditWindow::EditWindow_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EditWindow_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		Form^ form = this->Owner;
		form->Enabled = true; //делает главную форму доступной
	}

private: System::Void EditWindow_Load(System::Object^ sender, System::EventArgs^ e) {
	vector<Criminal> listcriminal = Criminal::ReadBaseCriminals(); //считывание базы всех актинвых преступников
	vector<string> allnicknamelist = Criminal::GetAllNickNames(listcriminal); //получение всех никнеймов из базы активных преступников
	if (listcriminal.empty()) {
		System::Windows::Forms::MessageBox::Show("Список преступников пуст. Пожалуйста, добавьте преступника в базу", "",
			MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	}
	else { //если список никнеймов не пуст - добавить каждый никнейм в выпадающий список (необходим для редактирования)
		for (string nicknames : allnicknamelist)
		{
			String^ enterstring;
			enterstring += gcnew String(nicknames.c_str());
			NickNameListBox->Items->Add(enterstring);
		}
	}
}

private: System::Void NickNameListBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	vector<Criminal> listcrime = Criminal::ReadBaseCriminals(); //считать базу всех активных преступников
	if (NickNameListBox->SelectedIndex != -1) { //если элемент выбран - заполнить поля формы текущией информацией о преступнике с заданным никнеймом
		string nickname = marshal_as<string>(NickNameListBox->SelectedItem->ToString());
		Criminal editCriminal = Criminal::GetObj(listcrime, nickname);

		String^ enterName; enterName += gcnew String(editCriminal.get_Name().c_str());
		NameBox->Text = enterName;
		String^ enterSurname; enterSurname += gcnew String(editCriminal.get_Surname().c_str());
		SurNameBox->Text = enterSurname;
		String^ enterHeight; enterHeight += gcnew String(editCriminal.get_Height().ToString());
		HeightMaskedBox->Text = enterHeight;
		String^ enterHairColor; enterHairColor += gcnew String(editCriminal.get_HairColor().c_str());
		HairColorBox->Text = enterHairColor;
		String^ enterEyeColor; enterEyeColor += gcnew String(editCriminal.get_EyeColor().c_str());
		EyeColorBox->Text = enterEyeColor;
		String^ enterCitizenship; enterCitizenship += gcnew String(editCriminal.get_Citizenship().c_str());
		CitizenshipBox->Text = enterCitizenship;
		String^ enterPlaceBirth; enterPlaceBirth += gcnew String(editCriminal.get_PlaceBirth().c_str());
		PlaceBirthBox->Text = enterPlaceBirth;
		String^ enterDateBirth; enterDateBirth += gcnew String(editCriminal.get_DateBirth().c_str());
		DateBirthMaskedBox->Text = enterDateBirth;
		String^ enterProfession; enterProfession += gcnew String(editCriminal.get_Profession().c_str());
		ProfessionBox->Text = enterProfession;
		String^ enterLang;
		for (string langs : editCriminal.get_LanguageSkills())
		{
			string lang = langs;
			enterLang += gcnew String(lang.c_str());
			enterLang += "/";
		}
		LangSkillsBox->Text = enterLang;
		String^ enterSign;
		for (string signs : editCriminal.get_SpecialSigns())
		{
			string sing = signs;
			enterSign += gcnew String(sing.c_str());
			enterSign += "/";
		}
		SpecialSignsBox->Text = enterSign;
	}
	else {
		System::Windows::Forms::MessageBox::Show("Пожалуйста, выберите преступника из списка, чтобы редактировать", "",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void UpdateNewCriminalButton_Click(System::Object^ sender, System::EventArgs^ e) {
	int index = NickNameListBox->SelectedIndex;
	try {
		if (index != -1) //если преступник для редактирования выбран - возможность обновить информацию 
		{
			vector<Criminal> listcrime = Criminal::ReadBaseCriminals();
			string nickname = marshal_as<string>(NickNameListBox->SelectedItem->ToString());
			string surname = marshal_as<string>(SurNameBox->Text);
			string name = marshal_as<string>(NameBox->Text);
			int height = Convert::ToInt16(HeightMaskedBox->Text);
			string hair = marshal_as<string>(HairColorBox->Text);
			string eye = marshal_as<string>(EyeColorBox->Text);

			list <string> specialsigns;
			string signs = marshal_as<string>(SpecialSignsBox->Text);
			typedef vector < string > splitted_vector_type;
			splitted_vector_type new_string;
			split(new_string, signs, is_any_of("/"));
			for (int j = 0; j < new_string.size(); j++) {
				specialsigns.push_back(new_string[j]);
			}

			string city = marshal_as<string>(CitizenshipBox->Text);
			string place = marshal_as<string>(PlaceBirthBox->Text);
			string date = marshal_as<string>(DateBirthMaskedBox->Text->ToString());

			list<string> langskills;
			string langs = marshal_as<string>(LangSkillsBox->Text);
			splitted_vector_type new_string2;
			split(new_string2, langs, is_any_of("/"));
			for (int j = 0; j < new_string2.size(); j++) {
				langskills.push_back(new_string2[j]);
			}

			string prof = marshal_as<string>(ProfessionBox->Text);
			//инициализация нового объекта, который будет заменять редактируемый объект в базе
			Criminal crime(surname, name, nickname, height, hair, eye, specialsigns, city, place, date, langskills, prof);
			//редактирование в базе объекта
			Criminal::EditCriminal(listcrime, nickname, crime);
				System::Windows::Forms::MessageBox::Show("Преступник успешно обновлен в базе", "",
					MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
		else {
			System::Windows::Forms::MessageBox::Show("Выберите преступника для редактирования из списка", "",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (...)
	{  //неустранимая ошибка из-за расхождения в региональных настроек. Исправляется пользователем вручную. В дальнейшем может быть исправлена
		System::Windows::Forms::MessageBox::Show("Пожалуйста, используйте латинские символы. Пожалуйста, удалите из файла DateinterpolGangs.json последнюю строку", "",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void DeathButton_Click(System::Object^ sender, System::EventArgs^ e) {
	int index = NickNameListBox->SelectedIndex;
	if (index != -1)
	{
		string NickName = marshal_as<string>((NickNameListBox->SelectedItem)->ToString());

		vector<Criminal> listcrime = Criminal::ReadBaseCriminals();
		vector<Gang> listGang = Gang::ReadBaseGangs();
		vector<Gang> listGang2;
		vector<Criminal> listcrime2 = Criminal::Delete_Criminal(NickName, listcrime); //удаление преступника из списка активных
		Criminal::WriteBaseCriminal(listcrime2); //запись базы активных преступников после удаления
		vector<string> Accomp = Gang::FindAccomplice(listGang, NickName); //список всех подельщиков удаленного преступника
		if (Accomp.size() == 0) //если таковых нет
		{
			System::Windows::Forms::MessageBox::Show("Данные о преступнике успешно удалены", "",
				MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
		else //иначе
		{
			vector<Gang> listGang2 = Gang::DeleteMember(listGang, NickName); //обновление базы преступных группировок: запись группировок без никнейма удаленного преступника
			Gang::WriteBaseGang(listGang2); //запись в базу информации обо всех группировках
			System::Windows::Forms::MessageBox::Show("Данные о преступнике успешно удалены и из всех группировок", "",
				MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
		EditWindow^ f = gcnew EditWindow(); //переоткрытие формы для корретного отображения информации в выпадающем списке никнеймов 
		f->Owner = this->Owner;
		this->Close();
		f->Show();
	}
	else
	{
		System::Windows::Forms::MessageBox::Show("Пожалуйста, выберите из списка человека, который уже умер",
			"", MessageBoxButtons::OK);
	}
}
private: System::Void ArchiveButton_Click(System::Object^ sender, System::EventArgs^ e) {
	int index = NickNameListBox->SelectedIndex;
	if (index != -1)
	{
		string NickName = marshal_as<string>((NickNameListBox->SelectedItem)->ToString());

		vector<Criminal> listcrimeActive1 = Criminal::ReadBaseCriminals();
		Criminal inArchive = Criminal::GetObj(listcrimeActive1, NickName);
		vector<Criminal> listcrimeActive2 = Criminal::Delete_Criminal(NickName, listcrimeActive1); //удаление преступника из списка активных
		Criminal::WriteBaseCriminal(listcrimeActive2); //запись активных пресутпников после удаления
		vector<Criminal> listcrimeArchive = Criminal::ReadBaseArcive();  //считывание базы архивных преступников
		vector<Criminal> listcrimeArchive2 = Criminal::Add_Criminal(listcrimeArchive, inArchive); //добавление удаленного из активных объекта в архив
		Criminal::WriteBaseArchive(listcrimeArchive2); //запись данных обо всех архивных преступников в архив

		vector<Gang> listGang = Gang::ReadBaseGangs();
		vector<Gang> listGang2;
		vector<string> Accomp = Gang::FindAccomplice(listGang, NickName);
		if (Accomp.size() == 0)
		{
			System::Windows::Forms::MessageBox::Show("Данные о преступнике успешно перенесены в архив", "",
				MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
		else
		{
			vector<Gang> listGang2 = Gang::DeleteMember(listGang, NickName);  //обновление базы преступных группировок: запись группировок без никнейма удаленного преступника
			Gang::WriteBaseGang(listGang2); //запись в базу информации обо всех группировках
			System::Windows::Forms::MessageBox::Show("Данные о преступнике успешно перенесены в архив и удалены из всех группировок", "",
				MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
		EditWindow^ f = gcnew EditWindow(); //переоткрытие формы для корретного отображения информации в выпадающем списке никнеймов 
		f->Owner = this->Owner;
		this->Close();
		f->Show();
	}
	else
	{
		System::Windows::Forms::MessageBox::Show("Пожалуйста, выберите из списка человека, который завязал",
			"", MessageBoxButtons::OK);
	}
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
