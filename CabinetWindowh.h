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
	/// Сводка для CabinetWindowh
	/// </summary>
	public ref class CabinetWindowh : public System::Windows::Forms::Form
	{
	public:
		CabinetWindowh(void)
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
		~CabinetWindowh()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ ListView;
	protected:

	private: System::Windows::Forms::Label^ label1_name;
	private: System::Windows::Forms::Label^ label_UserInf;

	private: System::Windows::Forms::Label^ label_name;
	private: System::Windows::Forms::TextBox^ NameBox;
	private: System::Windows::Forms::Label^ label_surname;
	private: System::Windows::Forms::TextBox^ SurNameBox;


	private: System::Windows::Forms::Label^ label_height;
	private: System::Windows::Forms::Label^ label_haircolor;
	private: System::Windows::Forms::Label^ label_eyecolor;
	private: System::Windows::Forms::Label^ label_specialsigns;





	private: System::Windows::Forms::Label^ label_citizenship;
	private: System::Windows::Forms::Label^ label_placebirth;
	private: System::Windows::Forms::Label^ label_datebirth;

	private: System::Windows::Forms::Label^ label_profession;
	private: System::Windows::Forms::Label^ label_langskills;















	private: System::Windows::Forms::TextBox^ HairColorBox;
	private: System::Windows::Forms::TextBox^ EyeColorBox;

	private: System::Windows::Forms::TextBox^ CitizenshipBox;
	private: System::Windows::Forms::TextBox^ PlaceBirthBox;


	private: System::Windows::Forms::TextBox^ ProfessionBox;
	private: System::Windows::Forms::TextBox^ LanguageSkillsBox;
	private: System::Windows::Forms::TextBox^ SpecialSignsBox;
	private: System::Windows::Forms::Button^ FindCriminalButton;
	private: System::Windows::Forms::Label^ label_accomplishies;
	private: System::Windows::Forms::Label^ label_NickName;


	private: System::Windows::Forms::ComboBox^ NickNameComboBox;
	private: System::Windows::Forms::Button^ FindAccomplicesButton;
	private: System::Windows::Forms::Button^ GetGangsButton;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::MaskedTextBox^ DateBirthMaskedBox;
	private: System::Windows::Forms::MaskedTextBox^ HeightMaskedBox;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CabinetWindowh::typeid));
			this->ListView = (gcnew System::Windows::Forms::ListBox());
			this->label1_name = (gcnew System::Windows::Forms::Label());
			this->label_UserInf = (gcnew System::Windows::Forms::Label());
			this->label_name = (gcnew System::Windows::Forms::Label());
			this->NameBox = (gcnew System::Windows::Forms::TextBox());
			this->label_surname = (gcnew System::Windows::Forms::Label());
			this->SurNameBox = (gcnew System::Windows::Forms::TextBox());
			this->label_height = (gcnew System::Windows::Forms::Label());
			this->label_haircolor = (gcnew System::Windows::Forms::Label());
			this->label_eyecolor = (gcnew System::Windows::Forms::Label());
			this->label_specialsigns = (gcnew System::Windows::Forms::Label());
			this->label_citizenship = (gcnew System::Windows::Forms::Label());
			this->label_placebirth = (gcnew System::Windows::Forms::Label());
			this->label_datebirth = (gcnew System::Windows::Forms::Label());
			this->label_profession = (gcnew System::Windows::Forms::Label());
			this->label_langskills = (gcnew System::Windows::Forms::Label());
			this->HairColorBox = (gcnew System::Windows::Forms::TextBox());
			this->EyeColorBox = (gcnew System::Windows::Forms::TextBox());
			this->CitizenshipBox = (gcnew System::Windows::Forms::TextBox());
			this->PlaceBirthBox = (gcnew System::Windows::Forms::TextBox());
			this->ProfessionBox = (gcnew System::Windows::Forms::TextBox());
			this->LanguageSkillsBox = (gcnew System::Windows::Forms::TextBox());
			this->SpecialSignsBox = (gcnew System::Windows::Forms::TextBox());
			this->FindCriminalButton = (gcnew System::Windows::Forms::Button());
			this->label_accomplishies = (gcnew System::Windows::Forms::Label());
			this->label_NickName = (gcnew System::Windows::Forms::Label());
			this->NickNameComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->FindAccomplicesButton = (gcnew System::Windows::Forms::Button());
			this->GetGangsButton = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->DateBirthMaskedBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->HeightMaskedBox = (gcnew System::Windows::Forms::MaskedTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// ListView
			// 
			this->ListView->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 8.25F));
			this->ListView->FormattingEnabled = true;
			this->ListView->ItemHeight = 12;
			this->ListView->Location = System::Drawing::Point(381, 59);
			this->ListView->Name = L"ListView";
			this->ListView->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ListView->ScrollAlwaysVisible = true;
			this->ListView->Size = System::Drawing::Size(444, 388);
			this->ListView->TabIndex = 0;
			// 
			// label1_name
			// 
			this->label1_name->AutoSize = true;
			this->label1_name->Font = (gcnew System::Drawing::Font(L"Anime Ace v05", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1_name->Location = System::Drawing::Point(12, 9);
			this->label1_name->Name = L"label1_name";
			this->label1_name->Size = System::Drawing::Size(657, 36);
			this->label1_name->TabIndex = 1;
			this->label1_name->Text = L"Данные картотеки интерпола";
			// 
			// label_UserInf
			// 
			this->label_UserInf->AutoSize = true;
			this->label_UserInf->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_UserInf->Location = System::Drawing::Point(31, 59);
			this->label_UserInf->Name = L"label_UserInf";
			this->label_UserInf->Size = System::Drawing::Size(306, 13);
			this->label_UserInf->TabIndex = 2;
			this->label_UserInf->Text = L"Задать параметры для поиска преступника:";
			// 
			// label_name
			// 
			this->label_name->AutoSize = true;
			this->label_name->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_name->Location = System::Drawing::Point(22, 81);
			this->label_name->Name = L"label_name";
			this->label_name->Size = System::Drawing::Size(37, 13);
			this->label_name->TabIndex = 3;
			this->label_name->Text = L"Имя:";
			// 
			// NameBox
			// 
			this->NameBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NameBox->Location = System::Drawing::Point(65, 81);
			this->NameBox->Multiline = true;
			this->NameBox->Name = L"NameBox";
			this->NameBox->Size = System::Drawing::Size(89, 20);
			this->NameBox->TabIndex = 4;
			// 
			// label_surname
			// 
			this->label_surname->AutoSize = true;
			this->label_surname->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_surname->Location = System::Drawing::Point(160, 82);
			this->label_surname->Name = L"label_surname";
			this->label_surname->Size = System::Drawing::Size(72, 13);
			this->label_surname->TabIndex = 5;
			this->label_surname->Text = L"Фамилия:";
			// 
			// SurNameBox
			// 
			this->SurNameBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SurNameBox->Location = System::Drawing::Point(238, 80);
			this->SurNameBox->Multiline = true;
			this->SurNameBox->Name = L"SurNameBox";
			this->SurNameBox->Size = System::Drawing::Size(126, 21);
			this->SurNameBox->TabIndex = 6;
			// 
			// label_height
			// 
			this->label_height->AutoSize = true;
			this->label_height->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_height->Location = System::Drawing::Point(226, 135);
			this->label_height->Name = L"label_height";
			this->label_height->Size = System::Drawing::Size(81, 13);
			this->label_height->TabIndex = 9;
			this->label_height->Text = L"Рост (см):";
			// 
			// label_haircolor
			// 
			this->label_haircolor->AutoSize = true;
			this->label_haircolor->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_haircolor->Location = System::Drawing::Point(22, 112);
			this->label_haircolor->Name = L"label_haircolor";
			this->label_haircolor->Size = System::Drawing::Size(87, 13);
			this->label_haircolor->TabIndex = 10;
			this->label_haircolor->Text = L"Цвет волос:";
			// 
			// label_eyecolor
			// 
			this->label_eyecolor->AutoSize = true;
			this->label_eyecolor->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_eyecolor->Location = System::Drawing::Point(22, 135);
			this->label_eyecolor->Name = L"label_eyecolor";
			this->label_eyecolor->Size = System::Drawing::Size(76, 13);
			this->label_eyecolor->TabIndex = 11;
			this->label_eyecolor->Text = L"Цвет глаз:";
			// 
			// label_specialsigns
			// 
			this->label_specialsigns->AutoSize = true;
			this->label_specialsigns->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_specialsigns->Location = System::Drawing::Point(25, 331);
			this->label_specialsigns->Name = L"label_specialsigns";
			this->label_specialsigns->Size = System::Drawing::Size(312, 26);
			this->label_specialsigns->TabIndex = 12;
			this->label_specialsigns->Text = L"Особые приметы : \r\n(введите через запятую, если их несколько)";
			// 
			// label_citizenship
			// 
			this->label_citizenship->AutoSize = true;
			this->label_citizenship->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_citizenship->Location = System::Drawing::Point(22, 162);
			this->label_citizenship->Name = L"label_citizenship";
			this->label_citizenship->Size = System::Drawing::Size(101, 13);
			this->label_citizenship->TabIndex = 13;
			this->label_citizenship->Text = L"Гражданство:";
			// 
			// label_placebirth
			// 
			this->label_placebirth->AutoSize = true;
			this->label_placebirth->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_placebirth->Location = System::Drawing::Point(22, 189);
			this->label_placebirth->Name = L"label_placebirth";
			this->label_placebirth->Size = System::Drawing::Size(133, 13);
			this->label_placebirth->TabIndex = 14;
			this->label_placebirth->Text = L"Место рождения: ";
			// 
			// label_datebirth
			// 
			this->label_datebirth->AutoSize = true;
			this->label_datebirth->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_datebirth->Location = System::Drawing::Point(22, 220);
			this->label_datebirth->Name = L"label_datebirth";
			this->label_datebirth->Size = System::Drawing::Size(221, 13);
			this->label_datebirth->TabIndex = 15;
			this->label_datebirth->Text = L"Дата рождения (дд.мм.гггг): ";
			// 
			// label_profession
			// 
			this->label_profession->AutoSize = true;
			this->label_profession->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_profession->Location = System::Drawing::Point(22, 253);
			this->label_profession->Name = L"label_profession";
			this->label_profession->Size = System::Drawing::Size(170, 13);
			this->label_profession->TabIndex = 17;
			this->label_profession->Text = L"Преступная профессия: ";
			// 
			// label_langskills
			// 
			this->label_langskills->AutoSize = true;
			this->label_langskills->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_langskills->Location = System::Drawing::Point(25, 284);
			this->label_langskills->Name = L"label_langskills";
			this->label_langskills->Size = System::Drawing::Size(312, 26);
			this->label_langskills->TabIndex = 18;
			this->label_langskills->Text = L"Знание языков:\r\n(введите через запятую, если их несколько)";
			// 
			// HairColorBox
			// 
			this->HairColorBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->HairColorBox->Location = System::Drawing::Point(104, 112);
			this->HairColorBox->Multiline = true;
			this->HairColorBox->Name = L"HairColorBox";
			this->HairColorBox->Size = System::Drawing::Size(116, 20);
			this->HairColorBox->TabIndex = 19;
			// 
			// EyeColorBox
			// 
			this->EyeColorBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EyeColorBox->Location = System::Drawing::Point(104, 135);
			this->EyeColorBox->Multiline = true;
			this->EyeColorBox->Name = L"EyeColorBox";
			this->EyeColorBox->Size = System::Drawing::Size(116, 20);
			this->EyeColorBox->TabIndex = 20;
			// 
			// CitizenshipBox
			// 
			this->CitizenshipBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CitizenshipBox->Location = System::Drawing::Point(127, 162);
			this->CitizenshipBox->Multiline = true;
			this->CitizenshipBox->Name = L"CitizenshipBox";
			this->CitizenshipBox->Size = System::Drawing::Size(237, 20);
			this->CitizenshipBox->TabIndex = 22;
			// 
			// PlaceBirthBox
			// 
			this->PlaceBirthBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PlaceBirthBox->Location = System::Drawing::Point(161, 189);
			this->PlaceBirthBox->Multiline = true;
			this->PlaceBirthBox->Name = L"PlaceBirthBox";
			this->PlaceBirthBox->Size = System::Drawing::Size(203, 20);
			this->PlaceBirthBox->TabIndex = 23;
			// 
			// ProfessionBox
			// 
			this->ProfessionBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ProfessionBox->Location = System::Drawing::Point(198, 250);
			this->ProfessionBox->Multiline = true;
			this->ProfessionBox->Name = L"ProfessionBox";
			this->ProfessionBox->Size = System::Drawing::Size(166, 20);
			this->ProfessionBox->TabIndex = 26;
			// 
			// LanguageSkillsBox
			// 
			this->LanguageSkillsBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LanguageSkillsBox->Location = System::Drawing::Point(139, 276);
			this->LanguageSkillsBox->Multiline = true;
			this->LanguageSkillsBox->Name = L"LanguageSkillsBox";
			this->LanguageSkillsBox->Size = System::Drawing::Size(225, 20);
			this->LanguageSkillsBox->TabIndex = 27;
			// 
			// SpecialSignsBox
			// 
			this->SpecialSignsBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SpecialSignsBox->Location = System::Drawing::Point(161, 324);
			this->SpecialSignsBox->Multiline = true;
			this->SpecialSignsBox->Name = L"SpecialSignsBox";
			this->SpecialSignsBox->Size = System::Drawing::Size(203, 20);
			this->SpecialSignsBox->TabIndex = 28;
			// 
			// FindCriminalButton
			// 
			this->FindCriminalButton->Font = (gcnew System::Drawing::Font(L"Anime Ace v05", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FindCriminalButton->Location = System::Drawing::Point(104, 369);
			this->FindCriminalButton->Name = L"FindCriminalButton";
			this->FindCriminalButton->Size = System::Drawing::Size(178, 24);
			this->FindCriminalButton->TabIndex = 29;
			this->FindCriminalButton->Text = L"Найти/показать";
			this->FindCriminalButton->UseVisualStyleBackColor = true;
			this->FindCriminalButton->Click += gcnew System::EventHandler(this, &CabinetWindowh::FindCriminalButton_Click);
			// 
			// label_accomplishies
			// 
			this->label_accomplishies->AutoSize = true;
			this->label_accomplishies->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_accomplishies->Location = System::Drawing::Point(462, 474);
			this->label_accomplishies->Name = L"label_accomplishies";
			this->label_accomplishies->Size = System::Drawing::Size(281, 13);
			this->label_accomplishies->TabIndex = 30;
			this->label_accomplishies->Text = L"Показать информацию о подельщиках: ";
			// 
			// label_NickName
			// 
			this->label_NickName->AutoSize = true;
			this->label_NickName->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_NickName->Location = System::Drawing::Point(437, 496);
			this->label_NickName->Name = L"label_NickName";
			this->label_NickName->Size = System::Drawing::Size(78, 13);
			this->label_NickName->TabIndex = 31;
			this->label_NickName->Text = L"Прозвище: ";
			// 
			// NickNameComboBox
			// 
			this->NickNameComboBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NickNameComboBox->FormattingEnabled = true;
			this->NickNameComboBox->Location = System::Drawing::Point(521, 496);
			this->NickNameComboBox->MaxDropDownItems = 10;
			this->NickNameComboBox->Name = L"NickNameComboBox";
			this->NickNameComboBox->Size = System::Drawing::Size(207, 21);
			this->NickNameComboBox->TabIndex = 32;
			this->NickNameComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &CabinetWindowh::NickNameComboBox_SelectedIndexChanged);
			// 
			// FindAccomplicesButton
			// 
			this->FindAccomplicesButton->Font = (gcnew System::Drawing::Font(L"Anime Ace v05", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FindAccomplicesButton->Location = System::Drawing::Point(491, 524);
			this->FindAccomplicesButton->Name = L"FindAccomplicesButton";
			this->FindAccomplicesButton->Size = System::Drawing::Size(178, 24);
			this->FindAccomplicesButton->TabIndex = 33;
			this->FindAccomplicesButton->Text = L"Найти/показать";
			this->FindAccomplicesButton->UseVisualStyleBackColor = true;
			this->FindAccomplicesButton->Click += gcnew System::EventHandler(this, &CabinetWindowh::FindAccomplicesButton_Click);
			// 
			// GetGangsButton
			// 
			this->GetGangsButton->Font = (gcnew System::Drawing::Font(L"Anime Ace v05", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->GetGangsButton->Location = System::Drawing::Point(465, 589);
			this->GetGangsButton->Name = L"GetGangsButton";
			this->GetGangsButton->Size = System::Drawing::Size(252, 41);
			this->GetGangsButton->TabIndex = 34;
			this->GetGangsButton->Text = L"Показать все данные о преступных группировках";
			this->GetGangsButton->UseVisualStyleBackColor = true;
			this->GetGangsButton->Click += gcnew System::EventHandler(this, &CabinetWindowh::GetGangsButton_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(18, 399);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(346, 273);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 35;
			this->pictureBox1->TabStop = false;
			// 
			// DateBirthMaskedBox
			// 
			this->DateBirthMaskedBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v05", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DateBirthMaskedBox->Location = System::Drawing::Point(239, 216);
			this->DateBirthMaskedBox->Mask = L"00/00/0000";
			this->DateBirthMaskedBox->Name = L"DateBirthMaskedBox";
			this->DateBirthMaskedBox->Size = System::Drawing::Size(68, 21);
			this->DateBirthMaskedBox->TabIndex = 36;
			this->DateBirthMaskedBox->ValidatingType = System::DateTime::typeid;
			// 
			// HeightMaskedBox
			// 
			this->HeightMaskedBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v05", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->HeightMaskedBox->Location = System::Drawing::Point(313, 131);
			this->HeightMaskedBox->Mask = L"999";
			this->HeightMaskedBox->Name = L"HeightMaskedBox";
			this->HeightMaskedBox->Size = System::Drawing::Size(40, 21);
			this->HeightMaskedBox->TabIndex = 37;
			// 
			// CabinetWindowh
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(847, 673);
			this->Controls->Add(this->HeightMaskedBox);
			this->Controls->Add(this->DateBirthMaskedBox);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->GetGangsButton);
			this->Controls->Add(this->FindAccomplicesButton);
			this->Controls->Add(this->NickNameComboBox);
			this->Controls->Add(this->label_NickName);
			this->Controls->Add(this->label_accomplishies);
			this->Controls->Add(this->FindCriminalButton);
			this->Controls->Add(this->SpecialSignsBox);
			this->Controls->Add(this->LanguageSkillsBox);
			this->Controls->Add(this->ProfessionBox);
			this->Controls->Add(this->PlaceBirthBox);
			this->Controls->Add(this->CitizenshipBox);
			this->Controls->Add(this->EyeColorBox);
			this->Controls->Add(this->HairColorBox);
			this->Controls->Add(this->label_langskills);
			this->Controls->Add(this->label_profession);
			this->Controls->Add(this->label_datebirth);
			this->Controls->Add(this->label_placebirth);
			this->Controls->Add(this->label_citizenship);
			this->Controls->Add(this->label_specialsigns);
			this->Controls->Add(this->label_eyecolor);
			this->Controls->Add(this->label_haircolor);
			this->Controls->Add(this->label_height);
			this->Controls->Add(this->SurNameBox);
			this->Controls->Add(this->label_surname);
			this->Controls->Add(this->NameBox);
			this->Controls->Add(this->label_name);
			this->Controls->Add(this->label_UserInf);
			this->Controls->Add(this->label1_name);
			this->Controls->Add(this->ListView);
			this->Name = L"CabinetWindowh";
			this->Text = L"CabinetWindowh";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &CabinetWindowh::CabinetWindowh_FormClosing);
			this->Load += gcnew System::EventHandler(this, &CabinetWindowh::CabinetWindowh_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CabinetWindowh_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		Form^ form = this->Owner;
		form->Enabled = true; //делает главную форму снова доступной
	}
private: System::Void FindCriminalButton_Click(System::Object^ sender, System::EventArgs^ e) {

	vector<Criminal> listcrime = Criminal::ReadBaseCriminals(); //считывание базы активных преступников
	if (listcrime.empty()) //если база активных преступников пуста
	{
		System::Windows::Forms::MessageBox::Show("Раздел Базы преступников пуст. Пожалуйста, добавьте запись", "",
			MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	}
	else //если преступники в базе есть
	{//проверка заполнения полей формы для различных способов поиска

		//если все поля пусты - вывод всех преступников из базы активных без критериев отбора
		if (NameBox->Text == "" && SurNameBox->Text == "" && HairColorBox->Text == "" && EyeColorBox->Text == "" &&
			HeightMaskedBox->Text->Length !=3 && CitizenshipBox->Text == "" && PlaceBirthBox->Text == "" 
			&& ProfessionBox->Text == "" && LanguageSkillsBox->Text == "" && SpecialSignsBox->Text == ""&& DateBirthMaskedBox->Text->Length != 10)
		{
			String^ enterString;
			enterString += "ИНФОРМАЦИЯ ПО РЕЗУЛЬТАТАМ ПОИСКА: ";
			ListView->Items->Add(enterString);
			enterString = "";
			ListView->Items->Add(enterString);
			for (Criminal criminals : listcrime)
			{
				Criminal criminal = criminals;
				ToView(criminal);
			}
		}
		//если все поля корректно заполнены - вывод преступников, удовлетворяющих параметрам поиска
		else if (NameBox->Text != "" && SurNameBox->Text != "" && HairColorBox->Text != "" && EyeColorBox->Text != "" &&
			HeightMaskedBox->Text->Length == 3 && CitizenshipBox->Text != "" && PlaceBirthBox->Text != ""
			&& ProfessionBox->Text != "" && LanguageSkillsBox->Text != "" && SpecialSignsBox->Text != "" && DateBirthMaskedBox->Text->Length == 10)
			 {
			//считвание данных из формы с приведением к типам полей класса
			String^ enterString;
			enterString += "ИНФОРМАЦИЯ ПО РЕЗУЛЬТАТАМ ПОИСКА ";
			ListView->Items->Add(enterString);
			enterString = "";
			enterString += " ЕСЛИ ВСЕ ПОЛЯ ЗАПОЛНЕНЫ:";
			ListView->Items->Add(enterString);
			enterString = "";

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
			string langs = marshal_as<string>(LanguageSkillsBox->Text);
			splitted_vector_type new_string2;
			split(new_string2, langs, is_any_of("/"));
			for (int j = 0; j < new_string2.size(); j++) {
				langskills.push_back(new_string2[j]);
			}
			vector <Criminal> listcrime2; //инициализация списка преступников для вывода по нажатию кнопки
			string prof = marshal_as<string>(ProfessionBox->Text);
			Criminal crime(surname, name, height, hair, eye, specialsigns, city, place, date, langskills, prof); //создание объекта преступника для поиска

			listcrime2 = Criminal::FindCriminal(listcrime, crime); //получить список преступников по поиску преступника (без учета никнейма - уникального для каждого объекта параметра)
			for (Criminal criminals : listcrime2)
			{
				Criminal criminal = criminals;
				ToView(criminal); 
			}
			
		}
		else //если не все поля для поиска заполнены: поиск по заданным пользователем полям
		{
			String^ enterString;
			enterString += "ИНФОРМАЦИЯ ПО РЕЗУЛЬТАТАМ ПОИСКА С ПАРАМЕТРАМИ: ";
			ListView->Items->Add(enterString);
			enterString = "";
			ListView->Items->Add(enterString);
			string surname;
			string name;
			string height;
			int height2;
			string hair;
			string eye;
			string signs;
			string city;
			string place;
			string date;
			string langs;
			string prof;

			if (SurNameBox->Text == "") { surname = ""; } //если строка пустая - передать методу поиска параметром пустую строку
			else { surname = marshal_as<string>(SurNameBox->Text); } //иначе передать значение из поля формы

			if (NameBox->Text == "") { name = ""; }
			else { name = marshal_as<string>(NameBox->Text); }

			if (HeightMaskedBox->Text->Length != 3) { height = ""; }
			else { height = marshal_as<string>(HeightMaskedBox->Text->ToString()); }

			if (HeightMaskedBox->Text->Length != 3) { height2 = -1; }
			else { height2 = Convert::ToInt16(HeightMaskedBox->Text); }

			if (HairColorBox->Text->ToString() == "") { hair = ""; }
			else { hair = marshal_as<string>(HairColorBox->Text); }

			if (EyeColorBox->Text->ToString() == "") { eye = ""; }
			else { eye = marshal_as<string>(EyeColorBox->Text); }


			typedef vector <string> splitted_vector_type;

			list <string> specialsigns;
			if (SpecialSignsBox->Text->ToString() != "") {
				list <string> specialsigns;
				signs = marshal_as<string>(SpecialSignsBox->Text);
				splitted_vector_type new_string;
				split(new_string, signs, is_any_of("/"));
				for (int j = 0; j < new_string.size(); j++) {
					specialsigns.push_back(new_string[j]);
				}
			}

			if (CitizenshipBox->Text->ToString() == "") { city = ""; }
			else { city = marshal_as<string>(CitizenshipBox->Text); }

			if (PlaceBirthBox->Text->ToString() == "") { place = ""; }
			else { place = marshal_as<string>(PlaceBirthBox->Text); }

			if (DateBirthMaskedBox->Text->Length != 10) { date = ""; }
			else { date = marshal_as<string>(DateBirthMaskedBox->Text->ToString()); }

			if (ProfessionBox->Text->ToString() == "") { prof = ""; }
			else { prof = marshal_as<string>(ProfessionBox->Text); }

			list<string> langskills;
			if (LanguageSkillsBox->Text->ToString() != "") {
				list<string> langskills;
				langs = marshal_as<string>(LanguageSkillsBox->Text);
				splitted_vector_type new_string2;
				split(new_string2, langs, is_any_of("/"));
				for (int j = 0; j < new_string2.size(); j++) {
					langskills.push_back(new_string2[j]);
				}
			}

			vector <Criminal> listcrime2; //иницализация списка для вывода результатов поиска 
			//вызов метода поиска по полям, заданным пользователем
			listcrime2 = Criminal::FindCriminal(listcrime, surname, name, height, height2, hair, eye, specialsigns, city, place, date, langskills, prof);
			for (Criminal criminals : listcrime2)
			{
				Criminal criminal = criminals;
				ToView(criminal);
			}
		}
	}
}
		//метод для вывода результатов работы поиска в форму
	   private: void ToView(Criminal criminal)
	   {
		   String^ enterString;
		   enterString += gcnew String(criminal.get_NickName().c_str());
		   ListView->Items->Add(enterString);
		   enterString = "";
		   enterString += "Фамилия:	";
		   enterString += gcnew String(criminal.get_Surname().c_str());
		   ListView->Items->Add(enterString);
		   enterString = "";
		   enterString += "Имя:	";
		   enterString += gcnew String(criminal.get_Name().c_str());
		   ListView->Items->Add(enterString);
		   enterString = "";
		   enterString += "Рост:	";
		   enterString += gcnew String(criminal.get_Height().ToString());
		   ListView->Items->Add(enterString);
		   enterString = "";
		   enterString += "Цвет волос:		";
		   enterString += gcnew String(criminal.get_HairColor().c_str());
		   ListView->Items->Add(enterString);
		   enterString = "";
		   enterString += "Цвет глаз:	";
		   enterString += gcnew String(criminal.get_EyeColor().c_str());
		   ListView->Items->Add(enterString);
		   enterString = "";
		   enterString += "Гражданство:	";
		   enterString += gcnew String(criminal.get_Citizenship().c_str());
		   ListView->Items->Add(enterString);
		   enterString = "";
		   enterString += "Место рождения:		";
		   enterString += gcnew String(criminal.get_PlaceBirth().c_str());
		   ListView->Items->Add(enterString);
		   enterString = "";
		   enterString += "Дата рождения:	";
		   enterString += gcnew String(criminal.get_DateBirth().c_str());
		   ListView->Items->Add(enterString);
		   enterString = "";
		   enterString += "Профессия:	";
		   enterString += gcnew String(criminal.get_Profession().c_str());
		   ListView->Items->Add(enterString);
		   enterString = "особые приметы:		";
		   ListView->Items->Add(enterString);
		   for (string signs : criminal.get_SpecialSigns())
		   {
			   string sign = signs;
			   enterString = "		";
			   enterString += gcnew String(sign.c_str());
			   ListView->Items->Add(enterString);
			   enterString = "";
		   }
		   ListView->Items->Add(enterString);
		   enterString = "знание языков:	";
		   ListView->Items->Add(enterString);
		   for (string langs : criminal.get_LanguageSkills())
		   {
			   string lang = langs;
			   enterString = "		";
			   enterString += gcnew String(lang.c_str());
			   ListView->Items->Add(enterString);
			   enterString = "";
		   }
		   ListView->Items->Add(enterString);
		   enterString = "";
		   ListView->Items->Add(enterString);
		   enterString = "";
		   ListView->Items->Add(enterString);
		   enterString = "";
		   ListView->Items->Add(enterString);
		}

private: System::Void NickNameComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
} 

private: System::Void GetGangsButton_Click(System::Object^ sender, System::EventArgs^ e) {
	vector<Gang> listGang = Gang::ReadBaseGangs(); //считывание базы всех преступных группировок
	if (listGang.empty())
	{
		System::Windows::Forms::MessageBox::Show("Раздел Базы группировок пуст. Пожалуйста, добавьте запись", "",
			MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	}
	else //вывод названия, типа и списка никнеймов для каждой преступной группировки в базе
	{
		String^ enterString;
		enterString += "ИНФОРМАЦИЯ ОБО ВСЕХ ГРУППИРОВКАХ: ";
		ListView->Items->Add(enterString);
		enterString = "";
		ListView->Items->Add(enterString);
		for (Gang gangs : listGang)
		{
			Gang gang = gangs;
			enterString = "";
			enterString += "Название:	";
			enterString += gcnew String(gang.get_CriminalGang().c_str());
			ListView->Items->Add(enterString);
			enterString = "";
			enterString += "Тип:	";
			enterString += gcnew String(gang.get_TypeGang().c_str());
			ListView->Items->Add(enterString);
			enterString = "Участники:	";
			ListView->Items->Add(enterString);
			for (string accompl : gang.get_Accomplices())
			{
				enterString = "";
				string accn = accompl;
				enterString += gcnew String(accn.c_str());
				ListView->Items->Add(enterString);
				enterString = "";
			}
			ListView->Items->Add(enterString);
			enterString = "";
			ListView->Items->Add(enterString);
			enterString = "";
			ListView->Items->Add(enterString);
			enterString = "";
			ListView->Items->Add(enterString);     
		}
	}
}

private: System::Void CabinetWindowh_Load(System::Object^ sender, System::EventArgs^ e) {
	vector<Criminal> listcriminal = Criminal::ReadBaseCriminals(); //считать базу активных преступников
	vector<string> allnicknamelist = Criminal::GetAllNickNames(listcriminal); //получить список никнеймов всех преступников
	if (listcriminal.empty())
	{
		System::Windows::Forms::MessageBox::Show("Раздел Базы преступников пуст. Пожалуйста, добавьте запись", "",
			MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	}
	else {
		for (string nicknames : allnicknamelist)
		{   //заполнить выпадающий список никнеймами
			String^ enterstring;
			enterstring += gcnew String(nicknames.c_str());
			NickNameComboBox->Items->Add(enterstring);

		}
	}
}

private: System::Void FindAccomplicesButton_Click(System::Object^ sender, System::EventArgs^ e) {

	if (NickNameComboBox->SelectedIndex != -1) //если в списке никнеймов выбрано поле для поиска
	{   //вывод всех членов группировок, где состоит преступник с указанным никнеймом.
		//на данный момент результат поиска может дублировать в себе информацию о заданном никнейме. 
		//В дальнейшем - результат отображения поиска может измениться
		string nickname = marshal_as<string>(NickNameComboBox->SelectedItem->ToString());
		vector<Gang> listGang = Gang::ReadBaseGangs(); //считать базу всех группировок
		vector<Criminal> listCrime = Criminal::ReadBaseCriminals(); //считать базу всех преступников
		//получить список всех никнеймов, которые состоят в одной группировке с никнеймом заданного для поиска преступника
		String^ enterString;
		vector<string> accomplices = Gang::FindAccomplice(listGang, nickname); 
		enterString += "ИНФОРМАЦИЯ ПО РЕЗУЛЬТАТАМ ПОИСКА ПОДЕЛЬЩИКОВ";
		ListView->Items->Add(enterString);
		enterString = "";
		enterString = "ДЛЯ : ";
		enterString += NickNameComboBox->SelectedItem->ToString();
		ListView->Items->Add(enterString);
		enterString = "";
		ListView->Items->Add(enterString);
		for (string acc : accomplices)
		{   //для каждого никнейма из списка никнеймов вывести всю информацию
			Criminal criminal = Criminal::GetObj(listCrime, acc);
			enterString += gcnew String(criminal.get_NickName().c_str());
			ListView->Items->Add(enterString);
			enterString = "";
			enterString += "Фамилия:	";
			enterString += gcnew String(criminal.get_Surname().c_str());
			ListView->Items->Add(enterString);
			enterString = "";
			enterString += "Имя:	";
			enterString += gcnew String(criminal.get_Name().c_str());
			ListView->Items->Add(enterString);
			enterString = "";
			enterString += "Рост:	";
			enterString += gcnew String(criminal.get_Height().ToString());
			ListView->Items->Add(enterString);
			enterString = "";
			enterString += "Цвет волос:		";
			enterString += gcnew String(criminal.get_HairColor().c_str());
			ListView->Items->Add(enterString);
			enterString = "";
			enterString += "Цвет глаз:	";
			enterString += gcnew String(criminal.get_EyeColor().c_str());
			ListView->Items->Add(enterString);
			enterString = "";
			enterString += "Гражданство:	";
			enterString += gcnew String(criminal.get_Citizenship().c_str());
			ListView->Items->Add(enterString);
			enterString = "";
			enterString += "Место рождения:		";
			enterString += gcnew String(criminal.get_PlaceBirth().c_str());
			ListView->Items->Add(enterString);
			enterString = "";
			enterString += "Дата рождения:	";
			enterString += gcnew String(criminal.get_DateBirth().c_str());
			ListView->Items->Add(enterString);
			enterString = "";
			enterString += "Профессия:	";
			enterString += gcnew String(criminal.get_Profession().c_str());
			ListView->Items->Add(enterString);
			enterString = "";
			enterString += "особые приметы:		";
			for (string signs : criminal.get_SpecialSigns())
			{
				string sign = signs;
				enterString += gcnew String(sign.c_str());
				enterString += "   ";
			}
			ListView->Items->Add(enterString);
			enterString = "знание языков:	";
			for (string langs : criminal.get_LanguageSkills())
			{
				string lang = langs;
				enterString += gcnew String(lang.c_str());
				enterString += "   ";
			}
			ListView->Items->Add(enterString);
			enterString = "";
			ListView->Items->Add(enterString);
			enterString = "";
			ListView->Items->Add(enterString);

		}
	}
	else
	{
		System::Windows::Forms::MessageBox::Show("Пожалуйста, выберите преступника для поиска подельщиков из списка, а затем повторите попытку", "",
			MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	}
}
};
}
