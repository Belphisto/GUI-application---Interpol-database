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
	/// Сводка для AddWindow
	/// </summary>
	public ref class AddWindow : public System::Windows::Forms::Form
	{
	public:
		AddWindow(void)
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
		~AddWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label_nameWindow;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label_infForCriminal;
	private: System::Windows::Forms::Label^ label_infForGangs;
	private: System::Windows::Forms::Label^ label_name;
	private: System::Windows::Forms::Label^ label_surname;
	private: System::Windows::Forms::Label^ label_nickname;
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
	private: System::Windows::Forms::TextBox^ NickNameBox;
	private: System::Windows::Forms::TextBox^ HairColorBox;
	private: System::Windows::Forms::TextBox^ EyeColorBox;

	private: System::Windows::Forms::TextBox^ PlaceBirthBox;
	private: System::Windows::Forms::TextBox^ CitizenshipBox;

	private: System::Windows::Forms::TextBox^ ProfessionBox;
	private: System::Windows::Forms::TextBox^ LangSkillsBox;
	private: System::Windows::Forms::TextBox^ SpecialSignsBox;












	private: System::Windows::Forms::MaskedTextBox^ DateBirthMaskedBox;
	private: System::Windows::Forms::Button^ CreateNewCriminalButton;
	private: System::Windows::Forms::Label^ label_gangname;
	private: System::Windows::Forms::Label^ label_typegang;
	private: System::Windows::Forms::Label^ label_accomplices;
	private: System::Windows::Forms::TextBox^ GangNameBox;
	private: System::Windows::Forms::TextBox^ TypeGangBox;
	private: System::Windows::Forms::ListBox^ AccomplicesGangListBox;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ CreateNewGangButton;
	private: System::Windows::Forms::MaskedTextBox^ HeightMaskedBox;
	private: System::Windows::Forms::Label^ label3;














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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddWindow::typeid));
			this->label_nameWindow = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label_infForCriminal = (gcnew System::Windows::Forms::Label());
			this->label_infForGangs = (gcnew System::Windows::Forms::Label());
			this->label_name = (gcnew System::Windows::Forms::Label());
			this->label_surname = (gcnew System::Windows::Forms::Label());
			this->label_nickname = (gcnew System::Windows::Forms::Label());
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
			this->NickNameBox = (gcnew System::Windows::Forms::TextBox());
			this->HairColorBox = (gcnew System::Windows::Forms::TextBox());
			this->EyeColorBox = (gcnew System::Windows::Forms::TextBox());
			this->PlaceBirthBox = (gcnew System::Windows::Forms::TextBox());
			this->CitizenshipBox = (gcnew System::Windows::Forms::TextBox());
			this->ProfessionBox = (gcnew System::Windows::Forms::TextBox());
			this->LangSkillsBox = (gcnew System::Windows::Forms::TextBox());
			this->SpecialSignsBox = (gcnew System::Windows::Forms::TextBox());
			this->DateBirthMaskedBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->CreateNewCriminalButton = (gcnew System::Windows::Forms::Button());
			this->label_gangname = (gcnew System::Windows::Forms::Label());
			this->label_typegang = (gcnew System::Windows::Forms::Label());
			this->label_accomplices = (gcnew System::Windows::Forms::Label());
			this->GangNameBox = (gcnew System::Windows::Forms::TextBox());
			this->TypeGangBox = (gcnew System::Windows::Forms::TextBox());
			this->AccomplicesGangListBox = (gcnew System::Windows::Forms::ListBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->CreateNewGangButton = (gcnew System::Windows::Forms::Button());
			this->HeightMaskedBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label_nameWindow
			// 
			this->label_nameWindow->AutoSize = true;
			this->label_nameWindow->Font = (gcnew System::Drawing::Font(L"Anime Ace v05", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_nameWindow->Location = System::Drawing::Point(12, 9);
			this->label_nameWindow->Name = L"label_nameWindow";
			this->label_nameWindow->Size = System::Drawing::Size(734, 36);
			this->label_nameWindow->TabIndex = 0;
			this->label_nameWindow->Text = L"Создание преступного объекта";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(384, 116);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(451, 328);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label_infForCriminal
			// 
			this->label_infForCriminal->AutoSize = true;
			this->label_infForCriminal->Font = (gcnew System::Drawing::Font(L"Anime Ace v05", 9, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_infForCriminal->Location = System::Drawing::Point(34, 62);
			this->label_infForCriminal->Name = L"label_infForCriminal";
			this->label_infForCriminal->Size = System::Drawing::Size(344, 14);
			this->label_infForCriminal->TabIndex = 2;
			this->label_infForCriminal->Text = L"Поля для создания нового преступника:";
			// 
			// label_infForGangs
			// 
			this->label_infForGangs->AutoSize = true;
			this->label_infForGangs->Font = (gcnew System::Drawing::Font(L"Anime Ace v05", 9, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_infForGangs->Location = System::Drawing::Point(405, 449);
			this->label_infForGangs->Name = L"label_infForGangs";
			this->label_infForGangs->Size = System::Drawing::Size(430, 14);
			this->label_infForGangs->TabIndex = 3;
			this->label_infForGangs->Text = L"Поля для создания новой преступной группировки:\r\n";
			// 
			// label_name
			// 
			this->label_name->AutoSize = true;
			this->label_name->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_name->Location = System::Drawing::Point(35, 91);
			this->label_name->Name = L"label_name";
			this->label_name->Size = System::Drawing::Size(44, 13);
			this->label_name->TabIndex = 4;
			this->label_name->Text = L"Имя: ";
			// 
			// label_surname
			// 
			this->label_surname->AutoSize = true;
			this->label_surname->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_surname->Location = System::Drawing::Point(35, 118);
			this->label_surname->Name = L"label_surname";
			this->label_surname->Size = System::Drawing::Size(79, 13);
			this->label_surname->TabIndex = 5;
			this->label_surname->Text = L"Фамилия: ";
			// 
			// label_nickname
			// 
			this->label_nickname->AutoSize = true;
			this->label_nickname->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_nickname->Location = System::Drawing::Point(34, 145);
			this->label_nickname->Name = L"label_nickname";
			this->label_nickname->Size = System::Drawing::Size(78, 13);
			this->label_nickname->TabIndex = 6;
			this->label_nickname->Text = L"Прозвище: ";
			// 
			// label_haircolor
			// 
			this->label_haircolor->AutoSize = true;
			this->label_haircolor->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_haircolor->Location = System::Drawing::Point(35, 170);
			this->label_haircolor->Name = L"label_haircolor";
			this->label_haircolor->Size = System::Drawing::Size(94, 13);
			this->label_haircolor->TabIndex = 7;
			this->label_haircolor->Text = L"Цвет волос: ";
			// 
			// label_eyecolor
			// 
			this->label_eyecolor->AutoSize = true;
			this->label_eyecolor->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_eyecolor->Location = System::Drawing::Point(35, 195);
			this->label_eyecolor->Name = L"label_eyecolor";
			this->label_eyecolor->Size = System::Drawing::Size(83, 13);
			this->label_eyecolor->TabIndex = 8;
			this->label_eyecolor->Text = L"Цвет глаз: ";
			// 
			// label_height
			// 
			this->label_height->AutoSize = true;
			this->label_height->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_height->Location = System::Drawing::Point(34, 221);
			this->label_height->Name = L"label_height";
			this->label_height->Size = System::Drawing::Size(102, 13);
			this->label_height->TabIndex = 9;
			this->label_height->Text = L"Рост (в см): ";
			// 
			// label_placebirth
			// 
			this->label_placebirth->AutoSize = true;
			this->label_placebirth->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_placebirth->Location = System::Drawing::Point(34, 244);
			this->label_placebirth->Name = L"label_placebirth";
			this->label_placebirth->Size = System::Drawing::Size(133, 13);
			this->label_placebirth->TabIndex = 10;
			this->label_placebirth->Text = L"Место рождения: ";
			// 
			// label_datebirth
			// 
			this->label_datebirth->AutoSize = true;
			this->label_datebirth->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_datebirth->Location = System::Drawing::Point(35, 270);
			this->label_datebirth->Name = L"label_datebirth";
			this->label_datebirth->Size = System::Drawing::Size(221, 13);
			this->label_datebirth->TabIndex = 11;
			this->label_datebirth->Text = L"Дата рождения (дд.мм.гггг): ";
			// 
			// label_citizenship
			// 
			this->label_citizenship->AutoSize = true;
			this->label_citizenship->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_citizenship->Location = System::Drawing::Point(35, 295);
			this->label_citizenship->Name = L"label_citizenship";
			this->label_citizenship->Size = System::Drawing::Size(108, 13);
			this->label_citizenship->TabIndex = 12;
			this->label_citizenship->Text = L"Гражданство: ";
			// 
			// label_profession
			// 
			this->label_profession->AutoSize = true;
			this->label_profession->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_profession->Location = System::Drawing::Point(34, 323);
			this->label_profession->Name = L"label_profession";
			this->label_profession->Size = System::Drawing::Size(170, 13);
			this->label_profession->TabIndex = 14;
			this->label_profession->Text = L"Преступная профессия: ";
			// 
			// label_langskills
			// 
			this->label_langskills->AutoSize = true;
			this->label_langskills->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_langskills->Location = System::Drawing::Point(34, 364);
			this->label_langskills->Name = L"label_langskills";
			this->label_langskills->Size = System::Drawing::Size(265, 26);
			this->label_langskills->TabIndex = 16;
			this->label_langskills->Text = L"Знание языков: \r\n(введите через /, если их несколько)";
			// 
			// label_specialsigns
			// 
			this->label_specialsigns->AutoSize = true;
			this->label_specialsigns->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_specialsigns->Location = System::Drawing::Point(34, 403);
			this->label_specialsigns->Name = L"label_specialsigns";
			this->label_specialsigns->Size = System::Drawing::Size(265, 26);
			this->label_specialsigns->TabIndex = 17;
			this->label_specialsigns->Text = L"Особые приметы:\r\n(введите через /, если их несколько)";
			// 
			// NameBox
			// 
			this->NameBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NameBox->Location = System::Drawing::Point(77, 90);
			this->NameBox->Multiline = true;
			this->NameBox->Name = L"NameBox";
			this->NameBox->Size = System::Drawing::Size(301, 20);
			this->NameBox->TabIndex = 18;
			// 
			// SurNameBox
			// 
			this->SurNameBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SurNameBox->Location = System::Drawing::Point(109, 116);
			this->SurNameBox->Multiline = true;
			this->SurNameBox->Name = L"SurNameBox";
			this->SurNameBox->Size = System::Drawing::Size(269, 20);
			this->SurNameBox->TabIndex = 19;
			// 
			// NickNameBox
			// 
			this->NickNameBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NickNameBox->Location = System::Drawing::Point(109, 143);
			this->NickNameBox->Multiline = true;
			this->NickNameBox->Name = L"NickNameBox";
			this->NickNameBox->Size = System::Drawing::Size(269, 20);
			this->NickNameBox->TabIndex = 20;
			// 
			// HairColorBox
			// 
			this->HairColorBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->HairColorBox->Location = System::Drawing::Point(129, 169);
			this->HairColorBox->Multiline = true;
			this->HairColorBox->Name = L"HairColorBox";
			this->HairColorBox->Size = System::Drawing::Size(249, 20);
			this->HairColorBox->TabIndex = 21;
			// 
			// EyeColorBox
			// 
			this->EyeColorBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->EyeColorBox->Location = System::Drawing::Point(129, 195);
			this->EyeColorBox->Multiline = true;
			this->EyeColorBox->Name = L"EyeColorBox";
			this->EyeColorBox->Size = System::Drawing::Size(249, 20);
			this->EyeColorBox->TabIndex = 22;
			// 
			// PlaceBirthBox
			// 
			this->PlaceBirthBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PlaceBirthBox->Location = System::Drawing::Point(165, 240);
			this->PlaceBirthBox->Multiline = true;
			this->PlaceBirthBox->Name = L"PlaceBirthBox";
			this->PlaceBirthBox->Size = System::Drawing::Size(127, 20);
			this->PlaceBirthBox->TabIndex = 24;
			// 
			// CitizenshipBox
			// 
			this->CitizenshipBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CitizenshipBox->Location = System::Drawing::Point(139, 290);
			this->CitizenshipBox->Multiline = true;
			this->CitizenshipBox->Name = L"CitizenshipBox";
			this->CitizenshipBox->Size = System::Drawing::Size(239, 20);
			this->CitizenshipBox->TabIndex = 25;
			// 
			// ProfessionBox
			// 
			this->ProfessionBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ProfessionBox->Location = System::Drawing::Point(205, 323);
			this->ProfessionBox->Multiline = true;
			this->ProfessionBox->Name = L"ProfessionBox";
			this->ProfessionBox->Size = System::Drawing::Size(173, 20);
			this->ProfessionBox->TabIndex = 27;
			// 
			// LangSkillsBox
			// 
			this->LangSkillsBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->LangSkillsBox->Location = System::Drawing::Point(149, 353);
			this->LangSkillsBox->Multiline = true;
			this->LangSkillsBox->Name = L"LangSkillsBox";
			this->LangSkillsBox->Size = System::Drawing::Size(229, 20);
			this->LangSkillsBox->TabIndex = 28;
			// 
			// SpecialSignsBox
			// 
			this->SpecialSignsBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SpecialSignsBox->Location = System::Drawing::Point(159, 395);
			this->SpecialSignsBox->Multiline = true;
			this->SpecialSignsBox->Name = L"SpecialSignsBox";
			this->SpecialSignsBox->Size = System::Drawing::Size(219, 20);
			this->SpecialSignsBox->TabIndex = 29;
			// 
			// DateBirthMaskedBox
			// 
			this->DateBirthMaskedBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v05", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DateBirthMaskedBox->Location = System::Drawing::Point(251, 264);
			this->DateBirthMaskedBox->Mask = L"00/00/0000";
			this->DateBirthMaskedBox->Name = L"DateBirthMaskedBox";
			this->DateBirthMaskedBox->Size = System::Drawing::Size(95, 21);
			this->DateBirthMaskedBox->TabIndex = 30;
			this->DateBirthMaskedBox->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &AddWindow::DateBirthMaskedBox_MaskInputRejected);
			// 
			// CreateNewCriminalButton
			// 
			this->CreateNewCriminalButton->Font = (gcnew System::Drawing::Font(L"Anime Ace v05", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CreateNewCriminalButton->Location = System::Drawing::Point(47, 436);
			this->CreateNewCriminalButton->Name = L"CreateNewCriminalButton";
			this->CreateNewCriminalButton->Size = System::Drawing::Size(299, 27);
			this->CreateNewCriminalButton->TabIndex = 31;
			this->CreateNewCriminalButton->Text = L"Внести преступника в базу";
			this->CreateNewCriminalButton->UseVisualStyleBackColor = true;
			this->CreateNewCriminalButton->Click += gcnew System::EventHandler(this, &AddWindow::CreateNewCriminalButton_Click);
			// 
			// label_gangname
			// 
			this->label_gangname->AutoSize = true;
			this->label_gangname->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_gangname->Location = System::Drawing::Point(421, 490);
			this->label_gangname->Name = L"label_gangname";
			this->label_gangname->Size = System::Drawing::Size(77, 13);
			this->label_gangname->TabIndex = 32;
			this->label_gangname->Text = L"Название: ";
			// 
			// label_typegang
			// 
			this->label_typegang->AutoSize = true;
			this->label_typegang->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_typegang->Location = System::Drawing::Point(421, 519);
			this->label_typegang->Name = L"label_typegang";
			this->label_typegang->Size = System::Drawing::Size(39, 13);
			this->label_typegang->TabIndex = 33;
			this->label_typegang->Text = L"Тип: ";
			// 
			// label_accomplices
			// 
			this->label_accomplices->AutoSize = true;
			this->label_accomplices->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_accomplices->Location = System::Drawing::Point(421, 542);
			this->label_accomplices->Name = L"label_accomplices";
			this->label_accomplices->Size = System::Drawing::Size(312, 13);
			this->label_accomplices->TabIndex = 34;
			this->label_accomplices->Text = L"Выберите одного или нескольких участников";
			// 
			// GangNameBox
			// 
			this->GangNameBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->GangNameBox->Location = System::Drawing::Point(494, 483);
			this->GangNameBox->Multiline = true;
			this->GangNameBox->Name = L"GangNameBox";
			this->GangNameBox->Size = System::Drawing::Size(252, 20);
			this->GangNameBox->TabIndex = 35;
			// 
			// TypeGangBox
			// 
			this->TypeGangBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TypeGangBox->Location = System::Drawing::Point(494, 519);
			this->TypeGangBox->Multiline = true;
			this->TypeGangBox->Name = L"TypeGangBox";
			this->TypeGangBox->Size = System::Drawing::Size(252, 20);
			this->TypeGangBox->TabIndex = 36;
			// 
			// AccomplicesGangListBox
			// 
			this->AccomplicesGangListBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->AccomplicesGangListBox->FormattingEnabled = true;
			this->AccomplicesGangListBox->Location = System::Drawing::Point(494, 570);
			this->AccomplicesGangListBox->Name = L"AccomplicesGangListBox";
			this->AccomplicesGangListBox->ScrollAlwaysVisible = true;
			this->AccomplicesGangListBox->SelectionMode = System::Windows::Forms::SelectionMode::MultiSimple;
			this->AccomplicesGangListBox->Size = System::Drawing::Size(252, 43);
			this->AccomplicesGangListBox->TabIndex = 38;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(18, 469);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(370, 205);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 39;
			this->pictureBox2->TabStop = false;
			// 
			// CreateNewGangButton
			// 
			this->CreateNewGangButton->Font = (gcnew System::Drawing::Font(L"Anime Ace v05", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CreateNewGangButton->Location = System::Drawing::Point(447, 635);
			this->CreateNewGangButton->Name = L"CreateNewGangButton";
			this->CreateNewGangButton->Size = System::Drawing::Size(299, 27);
			this->CreateNewGangButton->TabIndex = 40;
			this->CreateNewGangButton->Text = L"Внести группировку в базу";
			this->CreateNewGangButton->UseVisualStyleBackColor = true;
			this->CreateNewGangButton->Click += gcnew System::EventHandler(this, &AddWindow::CreateNewGangButton_Click);
			// 
			// HeightMaskedBox
			// 
			this->HeightMaskedBox->Font = (gcnew System::Drawing::Font(L"Anime Ace v05", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->HeightMaskedBox->Location = System::Drawing::Point(129, 217);
			this->HeightMaskedBox->Mask = L"999";
			this->HeightMaskedBox->Name = L"HeightMaskedBox";
			this->HeightMaskedBox->Size = System::Drawing::Size(53, 21);
			this->HeightMaskedBox->TabIndex = 41;
			this->HeightMaskedBox->ValidatingType = System::Int32::typeid;
			this->HeightMaskedBox->MaskInputRejected += gcnew System::Windows::Forms::MaskInputRejectedEventHandler(this, &AddWindow::maskedTextBox1_MaskInputRejected);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Anime Ace v3", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(421, 62);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(406, 26);
			this->label3->TabIndex = 42;
			this->label3->Text = L"Пожалуйста, используйте латинские символы при внесении\r\n изменений.\r\n";
			// 
			// AddWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(847, 674);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->HeightMaskedBox);
			this->Controls->Add(this->CreateNewGangButton);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->AccomplicesGangListBox);
			this->Controls->Add(this->TypeGangBox);
			this->Controls->Add(this->GangNameBox);
			this->Controls->Add(this->label_accomplices);
			this->Controls->Add(this->label_typegang);
			this->Controls->Add(this->label_gangname);
			this->Controls->Add(this->CreateNewCriminalButton);
			this->Controls->Add(this->DateBirthMaskedBox);
			this->Controls->Add(this->SpecialSignsBox);
			this->Controls->Add(this->LangSkillsBox);
			this->Controls->Add(this->ProfessionBox);
			this->Controls->Add(this->CitizenshipBox);
			this->Controls->Add(this->PlaceBirthBox);
			this->Controls->Add(this->EyeColorBox);
			this->Controls->Add(this->HairColorBox);
			this->Controls->Add(this->NickNameBox);
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
			this->Controls->Add(this->label_nickname);
			this->Controls->Add(this->label_surname);
			this->Controls->Add(this->label_name);
			this->Controls->Add(this->label_infForGangs);
			this->Controls->Add(this->label_infForCriminal);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label_nameWindow);
			this->Name = L"AddWindow";
			this->Text = L"AddWindow";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &AddWindow::AddWindow_FormClosing);
			this->Load += gcnew System::EventHandler(this, &AddWindow::AddWindow_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void maskedTextBox1_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
	}
	private: System::Void AddWindow_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		Form^ form = this->Owner;
		form->Enabled = true;
	}
private: System::Void AddWindow_Load(System::Object^ sender, System::EventArgs^ e) {
	vector<Criminal> listcriminal = Criminal::ReadBaseCriminals();
	if (listcriminal.empty())
	{
		System::Windows::Forms::MessageBox::Show("В базе не найдено ни одного преступника", "",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else
	{
		vector<string> allnicknamelist = Criminal::GetAllNickNames(listcriminal);
		for (string nicknames : allnicknamelist)
		{
			String^ enterstring;
			enterstring += gcnew String(nicknames.c_str());
			AccomplicesGangListBox->Items->Add(enterstring);
		}
	}

}
private: System::Void DateBirthMaskedBox_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
}
private: System::Void PlaceBirthBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CreateNewCriminalButton_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		vector<Criminal> listcrime = Criminal::ReadBaseCriminals();

		//проверка на то, все ли поля для создания преступника заполнены
		if ((NickNameBox->Text != "" && NameBox->Text != "" && SurNameBox->Text != "" && HairColorBox->Text != "" && EyeColorBox->Text != "" &&
			HeightMaskedBox->Text->Length == 3 && PlaceBirthBox->Text != "" && DateBirthMaskedBox->Text->Length == 10 && CitizenshipBox->Text != "" && ProfessionBox->Text != "" && LangSkillsBox->Text != "" && SpecialSignsBox->Text != ""))
		{
			string nickname = marshal_as<string>(NickNameBox->Text);
			//если все поля заполнены, проверка на уникальность никнейма в базе в разделе преступников
			if (Criminal::Find(listcrime, nickname)) //если преступник с таким никнеймом уже существует
			{
				System::Windows::Forms::MessageBox::Show("Преступник с таким именем уже существует", "",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else //если создание преступника возможно: 
			{   //заполнение полей класса: считывание данных из формы и преобразование данных в формат полей класса
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
				Criminal crime(surname, name, nickname, height, hair, eye, specialsigns, city, place, date, langskills, prof); //инициализация преступника
				vector<Criminal> listcrime2 = Criminal::Add_Criminal(listcrime, crime); //перезапись списка с добавлением нового преступника
				Criminal::WriteBaseCriminal(listcrime2); //запись списка в базу данных преступников
				AccomplicesGangListBox->Items->Add(NickNameBox->Text);

				System::Windows::Forms::MessageBox::Show("Преступник успешно добавлен в базу", "",
					MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			}
		}
		else
		{
			System::Windows::Forms::MessageBox::Show("Не удалось внести преступника в базу. Убедитесь, что все поля заполнены и повторите попытку", "",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (...)
	{
		//неустранимая ошибка вследствие разночтений региональных настроек. Исправляется пользователем пока вручную. Вдальнейшем может быть исправлена. 
		System::Windows::Forms::MessageBox::Show("Пожалуйста, используйте латинские символы. Пожалуйста, удалите из файла DateinterpolCriminals.json последнюю строку", "",
			MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
	private: System::Void CreateNewGangButton_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			vector<Gang> listGang = Gang::ReadBaseGangs(); //считывание из базы преступных группировок
			if (GangNameBox->Text != "" && TypeGangBox->Text != "" && AccomplicesGangListBox->Items->Count != 0)
			{
				string name = marshal_as<string>(GangNameBox->Text);
				if (Gang::FindGang(listGang, name)) //проверка на существование в базе группировки с введеным пользователем названием
				{
					System::Windows::Forms::MessageBox::Show("Группировка с таким названием уже существует", "",
						MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else //если название уникально для базы
				{   //извлечение данных, введенных пользователем в форму, перевод данных в тип данных полей класса
					string type = marshal_as<string>(TypeGangBox->Text);
					list<string> accomplicies_list;
					for each (String ^ var in AccomplicesGangListBox->SelectedItems)
					{
						string currentString = marshal_as<string>(var);
						accomplicies_list.push_back(currentString);
					}
					Gang gang(name, type, accomplicies_list);
					vector <Gang> listGang2 = Gang::Add_Gang(listGang, gang); //обновление списка преступных группировок
					Gang::WriteBaseGang(listGang2); //запись данных преступных группировок в базу

					System::Windows::Forms::MessageBox::Show("Группировка успешно добавлена в базу", "",
						MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				}
			}
			else
			{
				System::Windows::Forms::MessageBox::Show("Не удалось внести группировку в базу. Убедитесь, что все поля заполнены и повторите попытку.", "",
					MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (...)
		{
			//неустранимая ошибка вследствие разночтений региональных настроек. Исправляется пользователем пока вручную. Вдальнейшем может быть исправлена.
			System::Windows::Forms::MessageBox::Show("Пожалуйста, используйте латинские символы. Пожалуйста, удалите из файла DateinterpolGangs.json последнюю строку", "",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
}
};
}
