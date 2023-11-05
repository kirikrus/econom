#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: Bunifu::UI::WinForms::BunifuShapes^ bunifuShapes1;
	private: System::Windows::Forms::Label^ label1;
	private: Bunifu::UI::WinForms::BunifuShapes^ bunifuShapes2;
	private: System::Windows::Forms::Label^ label2;
	private: Bunifu::UI::WinForms::BunifuButton::BunifuButton^ bunifuButton2;
	private: Bunifu::UI::WinForms::BunifuButton::BunifuButton^ bunifuButton1;
	protected:
	protected:
	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			Bunifu::UI::WinForms::BunifuButton::BunifuButton::BorderEdges^ borderEdges2 = (gcnew Bunifu::UI::WinForms::BunifuButton::BunifuButton::BorderEdges());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			Bunifu::UI::WinForms::BunifuButton::BunifuButton::BorderEdges^ borderEdges1 = (gcnew Bunifu::UI::WinForms::BunifuButton::BunifuButton::BorderEdges());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->bunifuShapes2 = (gcnew Bunifu::UI::WinForms::BunifuShapes());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bunifuShapes1 = (gcnew Bunifu::UI::WinForms::BunifuShapes());
			this->bunifuButton1 = (gcnew Bunifu::UI::WinForms::BunifuButton::BunifuButton());
			this->bunifuButton2 = (gcnew Bunifu::UI::WinForms::BunifuButton::BunifuButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(27)));
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->bunifuButton2);
			this->panel1->Controls->Add(this->bunifuButton1);
			this->panel1->Controls->Add(this->bunifuShapes2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->bunifuShapes1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(283, 744);
			this->panel1->TabIndex = 0;
			// 
			// bunifuShapes2
			// 
			this->bunifuShapes2->Angle = 0;
			this->bunifuShapes2->BackColor = System::Drawing::Color::Transparent;
			this->bunifuShapes2->BorderColor = System::Drawing::Color::Transparent;
			this->bunifuShapes2->BorderThickness = 0;
			this->bunifuShapes2->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(103)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->bunifuShapes2->FillShape = true;
			this->bunifuShapes2->Location = System::Drawing::Point(10, 184);
			this->bunifuShapes2->Name = L"bunifuShapes2";
			this->bunifuShapes2->Shape = Bunifu::UI::WinForms::BunifuShapes::Shapes::Rectangle;
			this->bunifuShapes2->Sides = 5;
			this->bunifuShapes2->Size = System::Drawing::Size(17, 42);
			this->bunifuShapes2->TabIndex = 3;
			this->bunifuShapes2->Text = L"bunifuShapes2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Pixel));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(135, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 41);
			this->label1->TabIndex = 1;
			this->label1->Text = L" ирилл";
			// 
			// bunifuShapes1
			// 
			this->bunifuShapes1->Angle = 0;
			this->bunifuShapes1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuShapes1->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(103)), static_cast<System::Int32>(static_cast<System::Byte>(189)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->bunifuShapes1->BorderThickness = 2;
			this->bunifuShapes1->FillColor = System::Drawing::Color::Gainsboro;
			this->bunifuShapes1->FillShape = true;
			this->bunifuShapes1->Location = System::Drawing::Point(40, 40);
			this->bunifuShapes1->Name = L"bunifuShapes1";
			this->bunifuShapes1->Shape = Bunifu::UI::WinForms::BunifuShapes::Shapes::Circle;
			this->bunifuShapes1->Sides = 5;
			this->bunifuShapes1->Size = System::Drawing::Size(80, 80);
			this->bunifuShapes1->TabIndex = 1;
			this->bunifuShapes1->Text = L"bunifuShapes1";
			// 
			// bunifuButton1
			// 
			this->bunifuButton1->AllowAnimations = true;
			this->bunifuButton1->AllowMouseEffects = true;
			this->bunifuButton1->AllowToggling = false;
			this->bunifuButton1->AnimationSpeed = 200;
			this->bunifuButton1->AutoGenerateColors = false;
			this->bunifuButton1->AutoRoundBorders = false;
			this->bunifuButton1->AutoSizeLeftIcon = true;
			this->bunifuButton1->AutoSizeRightIcon = true;
			this->bunifuButton1->BackColor = System::Drawing::Color::Transparent;
			this->bunifuButton1->BackColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(183)));
			this->bunifuButton1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuButton1.BackgroundImage")));
			this->bunifuButton1->BorderStyle = Bunifu::UI::WinForms::BunifuButton::BunifuButton::BorderStyles::Solid;
			this->bunifuButton1->ButtonText = L"Ѕаланс";
			this->bunifuButton1->ButtonTextMarginLeft = 0;
			this->bunifuButton1->ColorContrastOnClick = 45;
			this->bunifuButton1->ColorContrastOnHover = 45;
			this->bunifuButton1->Cursor = System::Windows::Forms::Cursors::Default;
			borderEdges2->BottomLeft = true;
			borderEdges2->BottomRight = true;
			borderEdges2->TopLeft = true;
			borderEdges2->TopRight = true;
			this->bunifuButton1->CustomizableEdges = borderEdges2;
			this->bunifuButton1->DialogResult = System::Windows::Forms::DialogResult::None;
			this->bunifuButton1->DisabledBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(191)));
			this->bunifuButton1->DisabledFillColor = System::Drawing::Color::Empty;
			this->bunifuButton1->DisabledForecolor = System::Drawing::Color::Empty;
			this->bunifuButton1->FocusState = Bunifu::UI::WinForms::BunifuButton::BunifuButton::ButtonStates::Pressed;
			this->bunifuButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Pixel));
			this->bunifuButton1->ForeColor = System::Drawing::Color::White;
			this->bunifuButton1->IconLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuButton1.IconLeft")));
			this->bunifuButton1->IconLeftAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bunifuButton1->IconLeftCursor = System::Windows::Forms::Cursors::Default;
			this->bunifuButton1->IconLeftPadding = System::Windows::Forms::Padding(11, 3, 3, 3);
			this->bunifuButton1->IconMarginLeft = 11;
			this->bunifuButton1->IconPadding = 10;
			this->bunifuButton1->IconRight = nullptr;
			this->bunifuButton1->IconRightAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->bunifuButton1->IconRightCursor = System::Windows::Forms::Cursors::Default;
			this->bunifuButton1->IconRightPadding = System::Windows::Forms::Padding(3, 3, 7, 3);
			this->bunifuButton1->IconSize = 25;
			this->bunifuButton1->IdleBorderColor = System::Drawing::Color::Empty;
			this->bunifuButton1->IdleBorderRadius = 0;
			this->bunifuButton1->IdleBorderThickness = 0;
			this->bunifuButton1->IdleFillColor = System::Drawing::Color::Empty;
			this->bunifuButton1->IdleIconLeftImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuButton1.IdleIconLeftImage")));
			this->bunifuButton1->IdleIconRightImage = nullptr;
			this->bunifuButton1->IndicateFocus = false;
			this->bunifuButton1->Location = System::Drawing::Point(31, 167);
			this->bunifuButton1->Name = L"bunifuButton1";
			this->bunifuButton1->OnDisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(191)));
			this->bunifuButton1->OnDisabledState->BorderRadius = 0;
			this->bunifuButton1->OnDisabledState->BorderStyle = Bunifu::UI::WinForms::BunifuButton::BunifuButton::BorderStyles::Solid;
			this->bunifuButton1->OnDisabledState->BorderThickness = 1;
			this->bunifuButton1->OnDisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->bunifuButton1->OnDisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(168)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(168)));
			this->bunifuButton1->OnDisabledState->IconLeftImage = nullptr;
			this->bunifuButton1->OnDisabledState->IconRightImage = nullptr;
			this->bunifuButton1->onHoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->bunifuButton1->onHoverState->BorderRadius = 0;
			this->bunifuButton1->onHoverState->BorderStyle = Bunifu::UI::WinForms::BunifuButton::BunifuButton::BorderStyles::Solid;
			this->bunifuButton1->onHoverState->BorderThickness = 1;
			this->bunifuButton1->onHoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->bunifuButton1->onHoverState->ForeColor = System::Drawing::Color::White;
			this->bunifuButton1->onHoverState->IconLeftImage = nullptr;
			this->bunifuButton1->onHoverState->IconRightImage = nullptr;
			this->bunifuButton1->OnIdleState->BorderColor = System::Drawing::Color::Transparent;
			this->bunifuButton1->OnIdleState->BorderRadius = 0;
			this->bunifuButton1->OnIdleState->BorderStyle = Bunifu::UI::WinForms::BunifuButton::BunifuButton::BorderStyles::Solid;
			this->bunifuButton1->OnIdleState->BorderThickness = 1;
			this->bunifuButton1->OnIdleState->FillColor = System::Drawing::Color::Transparent;
			this->bunifuButton1->OnIdleState->ForeColor = System::Drawing::Color::White;
			this->bunifuButton1->OnIdleState->IconLeftImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuButton1.OnIdleState.IconLeftImage")));
			this->bunifuButton1->OnIdleState->IconRightImage = nullptr;
			this->bunifuButton1->OnPressedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(96)), static_cast<System::Int32>(static_cast<System::Byte>(144)));
			this->bunifuButton1->OnPressedState->BorderRadius = 0;
			this->bunifuButton1->OnPressedState->BorderStyle = Bunifu::UI::WinForms::BunifuButton::BunifuButton::BorderStyles::Solid;
			this->bunifuButton1->OnPressedState->BorderThickness = 1;
			this->bunifuButton1->OnPressedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(96)), static_cast<System::Int32>(static_cast<System::Byte>(144)));
			this->bunifuButton1->OnPressedState->ForeColor = System::Drawing::Color::White;
			this->bunifuButton1->OnPressedState->IconLeftImage = nullptr;
			this->bunifuButton1->OnPressedState->IconRightImage = nullptr;
			this->bunifuButton1->Size = System::Drawing::Size(251, 68);
			this->bunifuButton1->TabIndex = 4;
			this->bunifuButton1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuButton1->TextAlignment = System::Windows::Forms::HorizontalAlignment::Center;
			this->bunifuButton1->TextMarginLeft = 0;
			this->bunifuButton1->TextPadding = System::Windows::Forms::Padding(0);
			this->bunifuButton1->UseDefaultRadiusAndThickness = true;
			// 
			// bunifuButton2
			// 
			this->bunifuButton2->AllowAnimations = true;
			this->bunifuButton2->AllowMouseEffects = true;
			this->bunifuButton2->AllowToggling = false;
			this->bunifuButton2->AnimationSpeed = 200;
			this->bunifuButton2->AutoGenerateColors = false;
			this->bunifuButton2->AutoRoundBorders = false;
			this->bunifuButton2->AutoSizeLeftIcon = true;
			this->bunifuButton2->AutoSizeRightIcon = true;
			this->bunifuButton2->BackColor = System::Drawing::Color::Transparent;
			this->bunifuButton2->BackColor1 = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(122)),
				static_cast<System::Int32>(static_cast<System::Byte>(183)));
			this->bunifuButton2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuButton2.BackgroundImage")));
			this->bunifuButton2->BorderStyle = Bunifu::UI::WinForms::BunifuButton::BunifuButton::BorderStyles::Solid;
			this->bunifuButton2->ButtonText = L"÷ель";
			this->bunifuButton2->ButtonTextMarginLeft = 0;
			this->bunifuButton2->ColorContrastOnClick = 45;
			this->bunifuButton2->ColorContrastOnHover = 45;
			this->bunifuButton2->Cursor = System::Windows::Forms::Cursors::Default;
			borderEdges1->BottomLeft = true;
			borderEdges1->BottomRight = true;
			borderEdges1->TopLeft = true;
			borderEdges1->TopRight = true;
			this->bunifuButton2->CustomizableEdges = borderEdges1;
			this->bunifuButton2->DialogResult = System::Windows::Forms::DialogResult::None;
			this->bunifuButton2->DisabledBorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(191)));
			this->bunifuButton2->DisabledFillColor = System::Drawing::Color::Empty;
			this->bunifuButton2->DisabledForecolor = System::Drawing::Color::Empty;
			this->bunifuButton2->FocusState = Bunifu::UI::WinForms::BunifuButton::BunifuButton::ButtonStates::Pressed;
			this->bunifuButton2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Pixel));
			this->bunifuButton2->ForeColor = System::Drawing::Color::White;
			this->bunifuButton2->IconLeft = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuButton2.IconLeft")));
			this->bunifuButton2->IconLeftAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->bunifuButton2->IconLeftCursor = System::Windows::Forms::Cursors::Default;
			this->bunifuButton2->IconLeftPadding = System::Windows::Forms::Padding(11, 3, 3, 3);
			this->bunifuButton2->IconMarginLeft = 11;
			this->bunifuButton2->IconPadding = 10;
			this->bunifuButton2->IconRight = nullptr;
			this->bunifuButton2->IconRightAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->bunifuButton2->IconRightCursor = System::Windows::Forms::Cursors::Default;
			this->bunifuButton2->IconRightPadding = System::Windows::Forms::Padding(3, 3, 7, 3);
			this->bunifuButton2->IconSize = 25;
			this->bunifuButton2->IdleBorderColor = System::Drawing::Color::Empty;
			this->bunifuButton2->IdleBorderRadius = 0;
			this->bunifuButton2->IdleBorderThickness = 0;
			this->bunifuButton2->IdleFillColor = System::Drawing::Color::Empty;
			this->bunifuButton2->IdleIconLeftImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuButton2.IdleIconLeftImage")));
			this->bunifuButton2->IdleIconRightImage = nullptr;
			this->bunifuButton2->IndicateFocus = false;
			this->bunifuButton2->Location = System::Drawing::Point(31, 265);
			this->bunifuButton2->Name = L"bunifuButton2";
			this->bunifuButton2->OnDisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(191)),
				static_cast<System::Int32>(static_cast<System::Byte>(191)), static_cast<System::Int32>(static_cast<System::Byte>(191)));
			this->bunifuButton2->OnDisabledState->BorderRadius = 0;
			this->bunifuButton2->OnDisabledState->BorderStyle = Bunifu::UI::WinForms::BunifuButton::BunifuButton::BorderStyles::Solid;
			this->bunifuButton2->OnDisabledState->BorderThickness = 1;
			this->bunifuButton2->OnDisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)),
				static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(204)));
			this->bunifuButton2->OnDisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(168)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(168)));
			this->bunifuButton2->OnDisabledState->IconLeftImage = nullptr;
			this->bunifuButton2->OnDisabledState->IconRightImage = nullptr;
			this->bunifuButton2->onHoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->bunifuButton2->onHoverState->BorderRadius = 0;
			this->bunifuButton2->onHoverState->BorderStyle = Bunifu::UI::WinForms::BunifuButton::BunifuButton::BorderStyles::Solid;
			this->bunifuButton2->onHoverState->BorderThickness = 1;
			this->bunifuButton2->onHoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(150)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->bunifuButton2->onHoverState->ForeColor = System::Drawing::Color::White;
			this->bunifuButton2->onHoverState->IconLeftImage = nullptr;
			this->bunifuButton2->onHoverState->IconRightImage = nullptr;
			this->bunifuButton2->OnIdleState->BorderColor = System::Drawing::Color::Transparent;
			this->bunifuButton2->OnIdleState->BorderRadius = 0;
			this->bunifuButton2->OnIdleState->BorderStyle = Bunifu::UI::WinForms::BunifuButton::BunifuButton::BorderStyles::Solid;
			this->bunifuButton2->OnIdleState->BorderThickness = 1;
			this->bunifuButton2->OnIdleState->FillColor = System::Drawing::Color::Transparent;
			this->bunifuButton2->OnIdleState->ForeColor = System::Drawing::Color::White;
			this->bunifuButton2->OnIdleState->IconLeftImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuButton2.OnIdleState.IconLeftImage")));
			this->bunifuButton2->OnIdleState->IconRightImage = nullptr;
			this->bunifuButton2->OnPressedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(96)), static_cast<System::Int32>(static_cast<System::Byte>(144)));
			this->bunifuButton2->OnPressedState->BorderRadius = 0;
			this->bunifuButton2->OnPressedState->BorderStyle = Bunifu::UI::WinForms::BunifuButton::BunifuButton::BorderStyles::Solid;
			this->bunifuButton2->OnPressedState->BorderThickness = 1;
			this->bunifuButton2->OnPressedState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(96)), static_cast<System::Int32>(static_cast<System::Byte>(144)));
			this->bunifuButton2->OnPressedState->ForeColor = System::Drawing::Color::White;
			this->bunifuButton2->OnPressedState->IconLeftImage = nullptr;
			this->bunifuButton2->OnPressedState->IconRightImage = nullptr;
			this->bunifuButton2->Size = System::Drawing::Size(251, 68);
			this->bunifuButton2->TabIndex = 5;
			this->bunifuButton2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuButton2->TextAlignment = System::Windows::Forms::HorizontalAlignment::Center;
			this->bunifuButton2->TextMarginLeft = 0;
			this->bunifuButton2->TextPadding = System::Windows::Forms::Padding(-13, 0, 0, 0);
			this->bunifuButton2->UseDefaultRadiusAndThickness = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(121, 712);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 15);
			this->label2->TabIndex = 6;
			this->label2->Text = L"© 2023";
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(17)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)));
			this->ClientSize = System::Drawing::Size(1258, 744);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
};
}
