#pragma once

namespace NotePad {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editToolStripMenuItem;




	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;

	private: System::Windows::Forms::ColorDialog^ colorDialog2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^ cutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ copyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pastToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ deleteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ undoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ redoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator4;
	private: System::Windows::Forms::ToolStripMenuItem^ selectAllToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ printToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator5;
	private: System::Windows::Forms::PrintDialog^ printDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ viewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zoomToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zoomInToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zoomOutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ fontToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ fontColorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ backgroundColorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;










	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->printToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator5 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->undoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->redoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->cutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->copyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pastToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->selectAllToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zoomToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zoomInToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zoomOutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fontToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fontColorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->backgroundColorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->colorDialog2 = (gcnew System::Windows::Forms::ColorDialog());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->fileToolStripMenuItem,
					this->editToolStripMenuItem, this->viewToolStripMenuItem, this->toolsToolStripMenuItem, this->aboutToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1334, 36);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->BackColor = System::Drawing::Color::Transparent;
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->newToolStripMenuItem,
					this->openToolStripMenuItem, this->saveToolStripMenuItem, this->saveAsToolStripMenuItem, this->toolStripSeparator1, this->printToolStripMenuItem,
					this->toolStripSeparator5, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F));
			this->fileToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Transparent;
			this->fileToolStripMenuItem->Margin = System::Windows::Forms::Padding(0, 5, 0, 0);
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Padding = System::Windows::Forms::Padding(0, 0, 10, 0);
			this->fileToolStripMenuItem->Size = System::Drawing::Size(49, 27);
			this->fileToolStripMenuItem->Text = L"&File";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"newToolStripMenuItem.Image")));
			this->newToolStripMenuItem->Margin = System::Windows::Forms::Padding(0, 10, 0, 0);
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->newToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->newToolStripMenuItem->Size = System::Drawing::Size(256, 36);
			this->newToolStripMenuItem->Text = L"&New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::newToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"openToolStripMenuItem.Image")));
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->openToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->openToolStripMenuItem->Size = System::Drawing::Size(256, 36);
			this->openToolStripMenuItem->Text = L"&Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveToolStripMenuItem.Image")));
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->saveToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->saveToolStripMenuItem->Size = System::Drawing::Size(256, 36);
			this->saveToolStripMenuItem->Text = L"&Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveAsToolStripMenuItem.Image")));
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Padding = System::Windows::Forms::Padding(0);
			this->saveAsToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift)
				| System::Windows::Forms::Keys::S));
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(256, 26);
			this->saveAsToolStripMenuItem->Text = L"Save As";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveAsToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(253, 6);
			// 
			// printToolStripMenuItem
			// 
			this->printToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"printToolStripMenuItem.Image")));
			this->printToolStripMenuItem->Name = L"printToolStripMenuItem";
			this->printToolStripMenuItem->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->printToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::P));
			this->printToolStripMenuItem->Size = System::Drawing::Size(256, 36);
			this->printToolStripMenuItem->Text = L"Print";
			this->printToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::printToolStripMenuItem_Click);
			// 
			// toolStripSeparator5
			// 
			this->toolStripSeparator5->Name = L"toolStripSeparator5";
			this->toolStripSeparator5->Size = System::Drawing::Size(253, 6);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->exitToolStripMenuItem->Size = System::Drawing::Size(256, 36);
			this->exitToolStripMenuItem->Text = L"&Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->undoToolStripMenuItem,
					this->redoToolStripMenuItem, this->toolStripSeparator3, this->toolStripSeparator2, this->cutToolStripMenuItem, this->copyToolStripMenuItem,
					this->pastToolStripMenuItem, this->deleteToolStripMenuItem, this->toolStripSeparator4, this->selectAllToolStripMenuItem
			});
			this->editToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F));
			this->editToolStripMenuItem->Margin = System::Windows::Forms::Padding(0, 5, 0, 0);
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Padding = System::Windows::Forms::Padding(0, 0, 10, 0);
			this->editToolStripMenuItem->Size = System::Drawing::Size(53, 27);
			this->editToolStripMenuItem->Text = L"&Edit";
			// 
			// undoToolStripMenuItem
			// 
			this->undoToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"undoToolStripMenuItem.Image")));
			this->undoToolStripMenuItem->Margin = System::Windows::Forms::Padding(0, 10, 0, 0);
			this->undoToolStripMenuItem->Name = L"undoToolStripMenuItem";
			this->undoToolStripMenuItem->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->undoToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Z));
			this->undoToolStripMenuItem->Size = System::Drawing::Size(195, 36);
			this->undoToolStripMenuItem->Text = L"&Undo";
			this->undoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::undoToolStripMenuItem_Click);
			// 
			// redoToolStripMenuItem
			// 
			this->redoToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"redoToolStripMenuItem.Image")));
			this->redoToolStripMenuItem->Name = L"redoToolStripMenuItem";
			this->redoToolStripMenuItem->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->redoToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Y));
			this->redoToolStripMenuItem->Size = System::Drawing::Size(195, 36);
			this->redoToolStripMenuItem->Text = L"&Redo";
			this->redoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::redoToolStripMenuItem_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(192, 6);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(192, 6);
			// 
			// cutToolStripMenuItem
			// 
			this->cutToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cutToolStripMenuItem.Image")));
			this->cutToolStripMenuItem->Name = L"cutToolStripMenuItem";
			this->cutToolStripMenuItem->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->cutToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->cutToolStripMenuItem->Size = System::Drawing::Size(195, 36);
			this->cutToolStripMenuItem->Text = L"&Cut";
			this->cutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::cutToolStripMenuItem_Click);
			// 
			// copyToolStripMenuItem
			// 
			this->copyToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"copyToolStripMenuItem.Image")));
			this->copyToolStripMenuItem->Name = L"copyToolStripMenuItem";
			this->copyToolStripMenuItem->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->copyToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->copyToolStripMenuItem->Size = System::Drawing::Size(195, 36);
			this->copyToolStripMenuItem->Text = L"&Copy";
			this->copyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::copyToolStripMenuItem_Click);
			// 
			// pastToolStripMenuItem
			// 
			this->pastToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pastToolStripMenuItem.Image")));
			this->pastToolStripMenuItem->Name = L"pastToolStripMenuItem";
			this->pastToolStripMenuItem->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->pastToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::V));
			this->pastToolStripMenuItem->Size = System::Drawing::Size(195, 36);
			this->pastToolStripMenuItem->Text = L"&Paste";
			this->pastToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::pastToolStripMenuItem_Click);
			// 
			// deleteToolStripMenuItem
			// 
			this->deleteToolStripMenuItem->Name = L"deleteToolStripMenuItem";
			this->deleteToolStripMenuItem->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->deleteToolStripMenuItem->Size = System::Drawing::Size(195, 36);
			this->deleteToolStripMenuItem->Text = L"&Delete";
			this->deleteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::deleteToolStripMenuItem_Click);
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(192, 6);
			// 
			// selectAllToolStripMenuItem
			// 
			this->selectAllToolStripMenuItem->Name = L"selectAllToolStripMenuItem";
			this->selectAllToolStripMenuItem->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->selectAllToolStripMenuItem->Size = System::Drawing::Size(195, 36);
			this->selectAllToolStripMenuItem->Text = L"&Select All";
			this->selectAllToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::selectAllToolStripMenuItem_Click);
			// 
			// viewToolStripMenuItem
			// 
			this->viewToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->zoomToolStripMenuItem });
			this->viewToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->viewToolStripMenuItem->Margin = System::Windows::Forms::Padding(0, 5, 0, 0);
			this->viewToolStripMenuItem->Name = L"viewToolStripMenuItem";
			this->viewToolStripMenuItem->Padding = System::Windows::Forms::Padding(0, 0, 10, 0);
			this->viewToolStripMenuItem->Size = System::Drawing::Size(60, 27);
			this->viewToolStripMenuItem->Text = L"&View";
			// 
			// zoomToolStripMenuItem
			// 
			this->zoomToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->zoomInToolStripMenuItem,
					this->zoomOutToolStripMenuItem
			});
			this->zoomToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"zoomToolStripMenuItem.Image")));
			this->zoomToolStripMenuItem->Margin = System::Windows::Forms::Padding(0, 10, 0, 0);
			this->zoomToolStripMenuItem->Name = L"zoomToolStripMenuItem";
			this->zoomToolStripMenuItem->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->zoomToolStripMenuItem->Size = System::Drawing::Size(139, 36);
			this->zoomToolStripMenuItem->Text = L"&Zoom";
			this->zoomToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zoomToolStripMenuItem_Click);
			// 
			// zoomInToolStripMenuItem
			// 
			this->zoomInToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"zoomInToolStripMenuItem.Image")));
			this->zoomInToolStripMenuItem->Name = L"zoomInToolStripMenuItem";
			this->zoomInToolStripMenuItem->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->zoomInToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Up));
			this->zoomInToolStripMenuItem->Size = System::Drawing::Size(266, 36);
			this->zoomInToolStripMenuItem->Text = L"&Zoom In";
			this->zoomInToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zoomInToolStripMenuItem_Click);
			// 
			// zoomOutToolStripMenuItem
			// 
			this->zoomOutToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"zoomOutToolStripMenuItem.Image")));
			this->zoomOutToolStripMenuItem->Name = L"zoomOutToolStripMenuItem";
			this->zoomOutToolStripMenuItem->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->zoomOutToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Down));
			this->zoomOutToolStripMenuItem->Size = System::Drawing::Size(266, 36);
			this->zoomOutToolStripMenuItem->Text = L"Zoom &Out";
			this->zoomOutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zoomOutToolStripMenuItem_Click);
			// 
			// toolsToolStripMenuItem
			// 
			this->toolsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fontToolStripMenuItem,
					this->fontColorToolStripMenuItem, this->backgroundColorToolStripMenuItem
			});
			this->toolsToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->toolsToolStripMenuItem->Margin = System::Windows::Forms::Padding(0, 5, 0, 0);
			this->toolsToolStripMenuItem->Name = L"toolsToolStripMenuItem";
			this->toolsToolStripMenuItem->Padding = System::Windows::Forms::Padding(0, 0, 10, 0);
			this->toolsToolStripMenuItem->Size = System::Drawing::Size(62, 27);
			this->toolsToolStripMenuItem->Text = L"&Tools";
			this->toolsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::toolsToolStripMenuItem_Click);
			// 
			// fontToolStripMenuItem
			// 
			this->fontToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fontToolStripMenuItem.Image")));
			this->fontToolStripMenuItem->Name = L"fontToolStripMenuItem";
			this->fontToolStripMenuItem->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->fontToolStripMenuItem->Size = System::Drawing::Size(231, 36);
			this->fontToolStripMenuItem->Text = L"&Font";
			this->fontToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::fontToolStripMenuItem_Click_1);
			// 
			// fontColorToolStripMenuItem
			// 
			this->fontColorToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"fontColorToolStripMenuItem.Image")));
			this->fontColorToolStripMenuItem->Name = L"fontColorToolStripMenuItem";
			this->fontColorToolStripMenuItem->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->fontColorToolStripMenuItem->Size = System::Drawing::Size(231, 36);
			this->fontColorToolStripMenuItem->Text = L"&Font &Color";
			this->fontColorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::fontColorToolStripMenuItem_Click);
			// 
			// backgroundColorToolStripMenuItem
			// 
			this->backgroundColorToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backgroundColorToolStripMenuItem.Image")));
			this->backgroundColorToolStripMenuItem->Name = L"backgroundColorToolStripMenuItem";
			this->backgroundColorToolStripMenuItem->Padding = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->backgroundColorToolStripMenuItem->Size = System::Drawing::Size(231, 36);
			this->backgroundColorToolStripMenuItem->Text = L"&Background Color";
			this->backgroundColorToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::backgroundColorToolStripMenuItem_Click_1);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->Filter = L"txt files (.txt)|.txt|All files (.)|.";
			this->openFileDialog1->InitialDirectory = L"c:\\\\";
			this->openFileDialog1->RestoreDirectory = true;
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"txt files (.txt)|.txt|All files (.)|.";
			this->saveFileDialog1->RestoreDirectory = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Location = System::Drawing::Point(0, 36);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(1334, 630);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			this->richTextBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::richTextBox1_KeyPress);
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->aboutToolStripMenuItem->Margin = System::Windows::Forms::Padding(0, 5, 0, 0);
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Padding = System::Windows::Forms::Padding(0, 0, 10, 0);
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(71, 27);
			this->aboutToolStripMenuItem->Text = L"&About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1334, 666);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"NotePad ";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void newToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Text = "";
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}

	private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			StreamReader^ sr = gcnew StreamReader(openFileDialog1->FileName);
			richTextBox1->Text = sr->ReadToEnd();
			sr->Close();
		}
	}
	private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			StreamWriter^ sw = gcnew StreamWriter(saveFileDialog1->FileName);
			sw->Write(richTextBox1->Text);
			sw->Close();
		}
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void richTextBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

		////////// Code BK Start

			// Check if the pressed key is a letter
		if (Char::IsLetter(e->KeyChar)) {
			// If it's the first character or the previous character is a newline or period
			if (richTextBox1->Text->Length == 0 || richTextBox1->SelectionStart == 0 ||
				richTextBox1->Text[richTextBox1->SelectionStart - 1] == '\n' ||
				richTextBox1->Text[richTextBox1->SelectionStart - 1] == '.') {
				// Capitalize the letter
				e->KeyChar = Char::ToUpper(e->KeyChar);
			}
		}

		// Check if the pressed key is a period
		if (e->KeyChar == '.') {
			// Get the index of the period
			int periodIndex = richTextBox1->SelectionStart;

			// Check if the period is not the last character
			if (periodIndex < richTextBox1->Text->Length - 1) {
				// Insert a space after the period
				richTextBox1->Text = richTextBox1->Text->Insert(periodIndex + 1, " ");
				// Move the cursor to the next character position
				richTextBox1->SelectionStart = periodIndex + 2;
			}
		}

		////////// Code BK End



		////////// Other Code Start

		int cursorPosition = richTextBox1->SelectionStart;
		String^ inputText = richTextBox1->Text;


		richTextBox1->SelectionStart = 0;
		richTextBox1->SelectionLength = richTextBox1->Text->Length;
		richTextBox1->SelectionFont = gcnew System::Drawing::Font(richTextBox1->Font, FontStyle::Regular);
		richTextBox1->SelectionColor = Color::Black; // Reset text color
		richTextBox1->SelectionLength = 0;

		// Find and underline areas around double spaces
		int startIndex = 0;
		while (startIndex < richTextBox1->Text->Length) {
			int doubleSpaceIndex = richTextBox1->Text->IndexOf("  ", startIndex);
			if (doubleSpaceIndex != -1) {

				int resetBeforeIndex = doubleSpaceIndex > 0 ? doubleSpaceIndex - 1 : 0;
				richTextBox1->SelectionStart = resetBeforeIndex;
				richTextBox1->SelectionLength = 1;
				richTextBox1->SelectionFont = gcnew System::Drawing::Font(richTextBox1->Font, FontStyle::Regular);
				richTextBox1->SelectionColor = Color::Black;
				richTextBox1->SelectionLength = 0;


				int startUnderline = doubleSpaceIndex;
				int lengthUnderline = 2;

				richTextBox1->SelectionStart = startUnderline;
				richTextBox1->SelectionLength = lengthUnderline;
				richTextBox1->SelectionFont = gcnew System::Drawing::Font(richTextBox1->Font, FontStyle::Underline | FontStyle::Bold); // Underline and make it bold
				richTextBox1->SelectionColor = Color::Red;
				richTextBox1->SelectionLength = 0;


				int resetAfterIndex = doubleSpaceIndex + 2;
				if (resetAfterIndex < richTextBox1->Text->Length) {
					richTextBox1->SelectionStart = resetAfterIndex;
					richTextBox1->SelectionLength = 1;
					richTextBox1->SelectionFont = gcnew System::Drawing::Font(richTextBox1->Font, FontStyle::Regular);
					richTextBox1->SelectionColor = Color::Black;
					richTextBox1->SelectionLength = 0;
				}

				startIndex = resetAfterIndex;
			}
			else {
				break;
			}
		}


		for (int i = 0; i < richTextBox1->Text->Length - 1; ++i) {
			if (richTextBox1->Text[i] == '.') {

				if (i + 1 >= richTextBox1->Text->Length || richTextBox1->Text[i + 1] != ' ') {

					richTextBox1->SelectionStart = i;
					richTextBox1->SelectionLength = 1;
					richTextBox1->SelectionFont = gcnew System::Drawing::Font(richTextBox1->Font, FontStyle::Underline | FontStyle::Bold); // Underline and make it bold
					richTextBox1->SelectionColor = Color::Red;
					richTextBox1->SelectionLength = 0;
				}
			}
		}

		richTextBox1->SelectionStart = Math::Min(cursorPosition, richTextBox1->Text->Length);

	}



	private: System::Void cutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Cut();
	}
	private: System::Void copyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Copy();
	}
	private: System::Void pastToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Paste();
	}
	private: System::Void deleteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->SelectedText = "";
	}
	private: System::Void undoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (richTextBox1->CanUndo) {
			richTextBox1->Undo();
		}
	}
	private: System::Void redoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (richTextBox1->CanRedo) {
			richTextBox1->Redo();
		}
	}
	private: System::Void selectAllToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->SelectAll();
	}
	private: System::Void saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			StreamWriter^ sw = gcnew StreamWriter(saveFileDialog1->FileName);
			sw->Write(richTextBox1->Text);
			sw->Close();
		}
	}
	private: System::Void printToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		System::Drawing::Printing::PrintDocument^ printDoc = gcnew System::Drawing::Printing::PrintDocument;
		printDoc->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MyForm::printDocument_PrintPage);
		printDialog1->Document = printDoc;
		if (printDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			printDoc->Print();
		}
	}

	private: System::Void printDocument_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {

		e->Graphics->DrawString(richTextBox1->Text, richTextBox1->Font, System::Drawing::Brushes::Black, 100, 100);
	}
	private: System::Void zoomInToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		richTextBox1->ZoomFactor += 0.1f;
	}
	private: System::Void zoomOutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		richTextBox1->ZoomFactor -= 0.1f;
	}

	private: System::Void fileToolStripMenuItem_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void fileToolStripMenuItem_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void toolsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void fontToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (fontDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			richTextBox1->Font = fontDialog1->Font;
		}

	}
	private: System::Void backgroundColorToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			richTextBox1->BackColor = colorDialog1->Color;
		}
	}
	private: System::Void zoomToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void fontColorToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			richTextBox1->ForeColor = colorDialog1->Color;
		}
	}
	private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// Show a message box with information about the application
		MessageBox::Show("NotePad App\nVersion 1.0\nDeveloped by Geethaka Virajith", "About", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	};
}