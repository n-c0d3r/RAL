#include <RAL/RAL.h>
#include <WAL/WAL.h>



class C_Application {

private:
	WAL::I_Window* m_Window;
	bool m_IsRunning;



public:
	C_Application() :
		m_IsRunning(false)
	{

		WAL::I_API::Create();

		m_Window = WAL::I_StandardWindow::Create({

			L"RAL Application",

			900,
			600,

			WAL::E_WindowVisibility::Visible

		});

		m_Window->GetEvent("DESTROY")->AddListener([this](auto e) {

			this->RequestShutdown();

		});



		RAL::I_API::Create("DirectX11");

	}

	void RequestShutdown() {

		m_IsRunning = false;

	}

	void Release() {

		m_IsRunning = false;

		delete this;

	}

	void Start() {

		m_IsRunning = true;

		while (m_IsRunning) {

			if (WAL::I_API::GetInstance()->CheckMessage()) {



			}
			else {

				Update();
				Render();

			}

		}

	}
	void Update() {



	}
	void Render() {



	}

};



int main() {

	C_Application* app = new C_Application();

	app->Start();
	app->Release();

	return 0;
}