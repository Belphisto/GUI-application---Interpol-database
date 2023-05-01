#pragma once
#include "ArchiveWindow.h"
#include "CabinetWindowh.h"
#include "EditWindow.h"
#include "AddWindow.h"
#include "HelpWindow.h"

#include <iostream>
#include <istream>
#include <fstream>
#include <string>

namespace InterpolCabinet {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
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
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1_name;
	private: System::Windows::Forms::Label^ label2_creator;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button_GoToArchive;
	private: System::Windows::Forms::Button^ button_GoToBase;
	private: System::Windows::Forms::Button^ button_GoToEditWindow;
	private: System::Windows::Forms::Button^ button_GoToAddWindow;
	private: System::Windows::Forms::Button^ HelpButton;



	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindow::typeid));
			this->label1_name = (gcnew System::Windows::Forms::Label());
			this->label2_creator = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button_GoToArchive = (gcnew System::Windows::Forms::Button());
			this->button_GoToBase = (gcnew System::Windows::Forms::Button());
			this->button_GoToEditWindow = (gcnew System::Windows::Forms::Button());
			this->button_GoToAddWindow = (gcnew System::Windows::Forms::Button());
			this->HelpButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1_name
			// 
			this->label1_name->AutoSize = true;
			this->label1_name->Font = (gcnew System::Drawing::Font(L"Anime Ace v05", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1_name->Location = System::Drawing::Point(12, 9);
			this->label1_name->Name = L"label1_name";
			this->label1_name->Size = System::Drawing::Size(479, 108);
			this->label1_name->TabIndex = 0;
			this->label1_name->Text = L"КАРТОТЕКА ИНТЕРПОЛА\r\n\r\n\r\n";
			// 
			// label2_creator
			// 
			this->label2_creator->AutoSize = true;
			this->label2_creator->Font = (gcnew System::Drawing::Font(L"Anime Ace v05", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2_creator->Location = System::Drawing::Point(441, 372);
			this->label2_creator->Name = L"label2_creator";
			this->label2_creator->Size = System::Drawing::Size(342, 18);
			this->label2_creator->TabIndex = 1;
			this->label2_creator->Text = L"Creator: Elena Blinova, KE-204";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(434, 81);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(401, 278);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button_GoToArchive
			// 
			this->button_GoToArchive->Font = (gcnew System::Drawing::Font(L"Anime Ace v05", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_GoToArchive->Location = System::Drawing::Point(60, 81);
			this->button_GoToArchive->Name = L"button_GoToArchive";
			this->button_GoToArchive->Size = System::Drawing::Size(290, 36);
			this->button_GoToArchive->TabIndex = 2;
			this->button_GoToArchive->Text = L"Перейти в архив преступников";
			this->button_GoToArchive->UseVisualStyleBackColor = true;
			this->button_GoToArchive->Click += gcnew System::EventHandler(this, &MainWindow::button_GoToArchive_Click);
			// 
			// button_GoToBase
			// 
			this->button_GoToBase->Font = (gcnew System::Drawing::Font(L"Anime Ace v05", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_GoToBase->Location = System::Drawing::Point(60, 144);
			this->button_GoToBase->Name = L"button_GoToBase";
			this->button_GoToBase->Size = System::Drawing::Size(290, 34);
			this->button_GoToBase->TabIndex = 3;
			this->button_GoToBase->Text = L"Перейти в картотеку";
			this->button_GoToBase->UseVisualStyleBackColor = true;
			this->button_GoToBase->Click += gcnew System::EventHandler(this, &MainWindow::button_GoToBase_Click);
			// 
			// button_GoToEditWindow
			// 
			this->button_GoToEditWindow->Font = (gcnew System::Drawing::Font(L"Anime Ace v05", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_GoToEditWindow->Location = System::Drawing::Point(60, 208);
			this->button_GoToEditWindow->Name = L"button_GoToEditWindow";
			this->button_GoToEditWindow->Size = System::Drawing::Size(288, 32);
			this->button_GoToEditWindow->TabIndex = 4;
			this->button_GoToEditWindow->Text = L"Перейти в окно редактирования";
			this->button_GoToEditWindow->UseVisualStyleBackColor = true;
			this->button_GoToEditWindow->Click += gcnew System::EventHandler(this, &MainWindow::button_GoToEditWindow_Click);
			// 
			// button_GoToAddWindow
			// 
			this->button_GoToAddWindow->Font = (gcnew System::Drawing::Font(L"Anime Ace v05", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_GoToAddWindow->Location = System::Drawing::Point(60, 269);
			this->button_GoToAddWindow->Name = L"button_GoToAddWindow";
			this->button_GoToAddWindow->Size = System::Drawing::Size(288, 31);
			this->button_GoToAddWindow->TabIndex = 5;
			this->button_GoToAddWindow->Text = L"Перейти в окно создания";
			this->button_GoToAddWindow->UseVisualStyleBackColor = true;
			this->button_GoToAddWindow->Click += gcnew System::EventHandler(this, &MainWindow::button_GoToAddWindow_Click);
			// 
			// HelpButton
			// 
			this->HelpButton->Font = (gcnew System::Drawing::Font(L"Anime Ace v05", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->HelpButton->Location = System::Drawing::Point(60, 327);
			this->HelpButton->Name = L"HelpButton";
			this->HelpButton->Size = System::Drawing::Size(286, 32);
			this->HelpButton->TabIndex = 63;
			this->HelpButton->Text = L"Руководство пользователя";
			this->HelpButton->UseVisualStyleBackColor = true;
			this->HelpButton->Click += gcnew System::EventHandler(this, &MainWindow::HelpButton_Click);
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(847, 399);
			this->Controls->Add(this->HelpButton);
			this->Controls->Add(this->button_GoToAddWindow);
			this->Controls->Add(this->button_GoToEditWindow);
			this->Controls->Add(this->button_GoToBase);
			this->Controls->Add(this->button_GoToArchive);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2_creator);
			this->Controls->Add(this->label1_name);
			this->Name = L"MainWindow";
			this->Text = L"MainWindow";
			this->Load += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button_GoToArchive_Click(System::Object^ sender, System::EventArgs^ e) {
		if (FindFile())
		{
			ArchiveWindow^ f1 = gcnew ArchiveWindow();
			f1->Show();
			f1->Owner = this;
			this->Enabled = false; //текущая форма будет недоступна, пока не закроется форма ArchiveWindow
		}
	}
	private: System::Void button_GoToBase_Click(System::Object^ sender, System::EventArgs^ e) {
		if (FindFile())
		{
			CabinetWindowh^ f1 = gcnew CabinetWindowh();
			f1->Show();
			f1->Owner = this;
			this->Enabled = false; //текущая форма будет недоступна, пока не закроется форма CabinetWindowh
		}
	}
	private: System::Void button_GoToEditWindow_Click(System::Object^ sender, System::EventArgs^ e) {
		if (FindFile())
		{
			EditWindow^ f1 = gcnew EditWindow();
			f1->Show();
			f1->Owner = this;
			this->Enabled = false; //текущая форма будет недоступна, пока не закроется форма EditWindow
		}
	}
	private: System::Void button_GoToAddWindow_Click(System::Object^ sender, System::EventArgs^ e) {
		if (FindFile())
		{
			AddWindow^ f1 = gcnew AddWindow();
			f1->Show();
			f1->Owner = this;
			this->Enabled = false; //текущая форма будет недоступна, пока не закроется форма AddWindow
		}
	}
	private: System::Void HelpButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (FindFile())
		{
			HelpWindow^ f1 = gcnew HelpWindow();
			f1->Show();
			f1->Owner = this; //при открытии этой формы текущая форма будет доступна
		}
	}
	private: bool FindFile() //проверка на существование файлов
	{
		ifstream inp1, inp2, inp3;
		bool test =  true;
		inp1.open("DateinterpolCriminals.json");
		inp2.open("DateinterpolArchive.json");
		inp3.open("DateinterpolGangs.json");
		if (inp1.fail()) { //Если файл не существует - создание файла
			System::Windows::Forms::MessageBox::Show("Файлы для -картотеки интерпола- DateinterpolCriminals.json был создан",
				"", MessageBoxButtons::OK);
			ofstream addnewfile1("DateinterpolCriminals.json");
			test = false;
		}
		if (inp2.fail()) { //Если файл не существует - создание файла
			System::Windows::Forms::MessageBox::Show("Файлы для -картотеки интерпола- DateinterpolArchive.json был создан",
				"", MessageBoxButtons::OK);
			ofstream addnewfile2("DateinterpolArchive.json");
			test = false;
		}
		if (inp3.fail()) { //Если файл не существует - создание файла
			System::Windows::Forms::MessageBox::Show("Файлы для -картотеки интерпола-DateinterpolGangs.json был создан",
				"", MessageBoxButtons::OK);
			ofstream addnewfile3("DateinterpolGangs.json");
			test = false;
		}
		return test;
	}
private: System::Void MainWindow_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
