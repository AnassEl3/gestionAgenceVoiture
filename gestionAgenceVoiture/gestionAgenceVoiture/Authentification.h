#pragma once

namespace gestionAgenceVoiture {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Authentification
	/// </summary>
	public ref class Authentification : public System::Windows::Forms::Form
	{
	public:
		Authentification(void)
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
		~Authentification()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;

	private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox2;
	private: Guna::UI2::WinForms::Guna2TextBox^ guna2TextBox1;
	private: Guna::UI2::WinForms::Guna2Button^ guna2Button1;
	private: Guna::UI2::WinForms::Guna2Button^ guna2Button2;
	private: System::Windows::Forms::Label^ label1;
	private: Guna::UI2::WinForms::Guna2ToggleSwitch^ guna2ToggleSwitch1;
	private: Guna::UI2::WinForms::Guna2Elipse^ guna2Elipse1;

	private: Guna::UI2::WinForms::Guna2ControlBox^ guna2ControlBox2;
	private: Guna::UI2::WinForms::Guna2ControlBox^ guna2ControlBox1;
	private: Guna::UI2::WinForms::Guna2ShadowForm^ guna2ShadowForm1;
	private: Guna::UI2::WinForms::Guna2DragControl^ guna2DragControl1;



	private: System::ComponentModel::IContainer^ components;
	protected:

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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Authentification::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->guna2ControlBox2 = (gcnew Guna::UI2::WinForms::Guna2ControlBox());
			this->guna2ControlBox1 = (gcnew Guna::UI2::WinForms::Guna2ControlBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->guna2ToggleSwitch1 = (gcnew Guna::UI2::WinForms::Guna2ToggleSwitch());
			this->guna2Button2 = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->guna2Button1 = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->guna2TextBox2 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->guna2TextBox1 = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->guna2Elipse1 = (gcnew Guna::UI2::WinForms::Guna2Elipse(this->components));
			this->guna2ShadowForm1 = (gcnew Guna::UI2::WinForms::Guna2ShadowForm(this->components));
			this->guna2DragControl1 = (gcnew Guna::UI2::WinForms::Guna2DragControl(this->components));
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->guna2ControlBox2);
			this->panel1->Controls->Add(this->guna2ControlBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->guna2ToggleSwitch1);
			this->panel1->Controls->Add(this->guna2Button2);
			this->panel1->Controls->Add(this->guna2Button1);
			this->panel1->Controls->Add(this->guna2TextBox2);
			this->panel1->Controls->Add(this->guna2TextBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(928, 566);
			this->panel1->TabIndex = 0;
			// 
			// guna2ControlBox2
			// 
			this->guna2ControlBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->guna2ControlBox2->ControlBoxType = Guna::UI2::WinForms::Enums::ControlBoxType::MinimizeBox;
			this->guna2ControlBox2->FillColor = System::Drawing::Color::Black;
			this->guna2ControlBox2->HoverState->Parent = this->guna2ControlBox2;
			this->guna2ControlBox2->IconColor = System::Drawing::Color::White;
			this->guna2ControlBox2->Location = System::Drawing::Point(844, 12);
			this->guna2ControlBox2->Name = L"guna2ControlBox2";
			this->guna2ControlBox2->ShadowDecoration->Parent = this->guna2ControlBox2;
			this->guna2ControlBox2->Size = System::Drawing::Size(33, 30);
			this->guna2ControlBox2->TabIndex = 12;
			// 
			// guna2ControlBox1
			// 
			this->guna2ControlBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->guna2ControlBox1->FillColor = System::Drawing::Color::Black;
			this->guna2ControlBox1->HoverState->FillColor = System::Drawing::Color::Red;
			this->guna2ControlBox1->HoverState->Parent = this->guna2ControlBox1;
			this->guna2ControlBox1->IconColor = System::Drawing::Color::White;
			this->guna2ControlBox1->Location = System::Drawing::Point(883, 12);
			this->guna2ControlBox1->Name = L"guna2ControlBox1";
			this->guna2ControlBox1->ShadowDecoration->Parent = this->guna2ControlBox1;
			this->guna2ControlBox1->Size = System::Drawing::Size(33, 30);
			this->guna2ControlBox1->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(78, 347);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 19);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Afficher les caractères";
			// 
			// guna2ToggleSwitch1
			// 
			this->guna2ToggleSwitch1->Animated = true;
			this->guna2ToggleSwitch1->BackColor = System::Drawing::Color::Black;
			this->guna2ToggleSwitch1->CheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->guna2ToggleSwitch1->CheckedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->guna2ToggleSwitch1->CheckedState->InnerBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(218)),
				static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->guna2ToggleSwitch1->CheckedState->InnerColor = System::Drawing::Color::White;
			this->guna2ToggleSwitch1->CheckedState->Parent = this->guna2ToggleSwitch1;
			this->guna2ToggleSwitch1->Location = System::Drawing::Point(37, 347);
			this->guna2ToggleSwitch1->Name = L"guna2ToggleSwitch1";
			this->guna2ToggleSwitch1->ShadowDecoration->Parent = this->guna2ToggleSwitch1;
			this->guna2ToggleSwitch1->Size = System::Drawing::Size(35, 20);
			this->guna2ToggleSwitch1->TabIndex = 9;
			this->guna2ToggleSwitch1->UncheckedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->guna2ToggleSwitch1->UncheckedState->BorderThickness = 2;
			this->guna2ToggleSwitch1->UncheckedState->FillColor = System::Drawing::Color::Black;
			this->guna2ToggleSwitch1->UncheckedState->InnerBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->guna2ToggleSwitch1->UncheckedState->InnerColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)),
				static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->guna2ToggleSwitch1->UncheckedState->Parent = this->guna2ToggleSwitch1;
			// 
			// guna2Button2
			// 
			this->guna2Button2->Animated = true;
			this->guna2Button2->BackColor = System::Drawing::Color::Transparent;
			this->guna2Button2->BorderColor = System::Drawing::Color::IndianRed;
			this->guna2Button2->BorderRadius = 10;
			this->guna2Button2->BorderThickness = 2;
			this->guna2Button2->CheckedState->Parent = this->guna2Button2;
			this->guna2Button2->CustomImages->Parent = this->guna2Button2;
			this->guna2Button2->FillColor = System::Drawing::Color::Black;
			this->guna2Button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->guna2Button2->ForeColor = System::Drawing::Color::White;
			this->guna2Button2->HoverState->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->guna2Button2->HoverState->Parent = this->guna2Button2;
			this->guna2Button2->Location = System::Drawing::Point(189, 408);
			this->guna2Button2->Name = L"guna2Button2";
			this->guna2Button2->ShadowDecoration->Parent = this->guna2Button2;
			this->guna2Button2->Size = System::Drawing::Size(126, 45);
			this->guna2Button2->TabIndex = 7;
			this->guna2Button2->Text = L"Quitter";
			this->guna2Button2->UseTransparentBackground = true;
			// 
			// guna2Button1
			// 
			this->guna2Button1->Animated = true;
			this->guna2Button1->BackColor = System::Drawing::Color::Transparent;
			this->guna2Button1->BorderRadius = 10;
			this->guna2Button1->CheckedState->Parent = this->guna2Button1;
			this->guna2Button1->CustomImages->Parent = this->guna2Button1;
			this->guna2Button1->FillColor = System::Drawing::Color::IndianRed;
			this->guna2Button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->guna2Button1->ForeColor = System::Drawing::Color::White;
			this->guna2Button1->HoverState->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->guna2Button1->HoverState->Parent = this->guna2Button1;
			this->guna2Button1->Location = System::Drawing::Point(37, 408);
			this->guna2Button1->Name = L"guna2Button1";
			this->guna2Button1->ShadowDecoration->Parent = this->guna2Button1;
			this->guna2Button1->Size = System::Drawing::Size(126, 45);
			this->guna2Button1->TabIndex = 6;
			this->guna2Button1->Text = L"Se connecter";
			this->guna2Button1->UseTransparentBackground = true;
			this->guna2Button1->Click += gcnew System::EventHandler(this, &Authentification::guna2Button1_Click);
			// 
			// guna2TextBox2
			// 
			this->guna2TextBox2->Animated = true;
			this->guna2TextBox2->BackColor = System::Drawing::Color::Black;
			this->guna2TextBox2->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->guna2TextBox2->BorderRadius = 6;
			this->guna2TextBox2->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->guna2TextBox2->DefaultText = L"";
			this->guna2TextBox2->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->guna2TextBox2->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->guna2TextBox2->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->guna2TextBox2->DisabledState->Parent = this->guna2TextBox2;
			this->guna2TextBox2->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->guna2TextBox2->FillColor = System::Drawing::Color::Black;
			this->guna2TextBox2->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->guna2TextBox2->FocusedState->Parent = this->guna2TextBox2;
			this->guna2TextBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->guna2TextBox2->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->guna2TextBox2->HoverState->Parent = this->guna2TextBox2;
			this->guna2TextBox2->Location = System::Drawing::Point(37, 286);
			this->guna2TextBox2->Name = L"guna2TextBox2";
			this->guna2TextBox2->PasswordChar = '\0';
			this->guna2TextBox2->PlaceholderText = L"Password";
			this->guna2TextBox2->SelectedText = L"";
			this->guna2TextBox2->ShadowDecoration->Parent = this->guna2TextBox2;
			this->guna2TextBox2->Size = System::Drawing::Size(278, 36);
			this->guna2TextBox2->TabIndex = 2;
			this->guna2TextBox2->UseSystemPasswordChar = true;
			// 
			// guna2TextBox1
			// 
			this->guna2TextBox1->Animated = true;
			this->guna2TextBox1->BackColor = System::Drawing::Color::Black;
			this->guna2TextBox1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(234)), static_cast<System::Int32>(static_cast<System::Byte>(153)),
				static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->guna2TextBox1->BorderRadius = 6;
			this->guna2TextBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->guna2TextBox1->DefaultText = L"";
			this->guna2TextBox1->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->guna2TextBox1->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->guna2TextBox1->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->guna2TextBox1->DisabledState->Parent = this->guna2TextBox1;
			this->guna2TextBox1->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->guna2TextBox1->FillColor = System::Drawing::Color::Black;
			this->guna2TextBox1->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->guna2TextBox1->FocusedState->Parent = this->guna2TextBox1;
			this->guna2TextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->guna2TextBox1->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->guna2TextBox1->HoverState->Parent = this->guna2TextBox1;
			this->guna2TextBox1->Location = System::Drawing::Point(37, 225);
			this->guna2TextBox1->Name = L"guna2TextBox1";
			this->guna2TextBox1->PasswordChar = '\0';
			this->guna2TextBox1->PlaceholderText = L"Login";
			this->guna2TextBox1->SelectedText = L"";
			this->guna2TextBox1->ShadowDecoration->Parent = this->guna2TextBox1;
			this->guna2TextBox1->Size = System::Drawing::Size(278, 36);
			this->guna2TextBox1->TabIndex = 1;
			// 
			// guna2Elipse1
			// 
			this->guna2Elipse1->TargetControl = this;
			// 
			// guna2ShadowForm1
			// 
			this->guna2ShadowForm1->BorderRadius = 6;
			this->guna2ShadowForm1->ShadowColor = System::Drawing::Color::IndianRed;
			this->guna2ShadowForm1->TargetForm = this;
			// 
			// guna2DragControl1
			// 
			this->guna2DragControl1->ContainerControl = this;
			this->guna2DragControl1->TargetControl = this;
			this->guna2DragControl1->TransparentWhileDrag = true;
			this->guna2DragControl1->UseTransparentDrag = true;
			// 
			// Authentification
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(928, 566);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Authentification";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Authentification";
			this->Load += gcnew System::EventHandler(this, &Authentification::Authentification_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Authentification_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void guna2Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}


};
}
