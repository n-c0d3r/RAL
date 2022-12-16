#pragma once

#include <RAL/.BuildInfo>
#include <RAL/Utils.h>



namespace RAL {

	class I_FormatManager;
	class I_UsageManager;



	class I_API :
		public UL::I_AbstractObject,
		public UL::TC_Singleton<I_API>
	{

	protected:
		std::string m_Name;
		I_FormatManager* m_FormatManager;
		I_UsageManager* m_UsageManager;



	protected:
		I_API(
			const std::string& name,

			I_FormatManager* formatManager,
			I_UsageManager* usageManager
		) : 
			TC_Singleton(),

			m_Name(name),
			m_FormatManager(formatManager),
			m_UsageManager(usageManager)
		{



		}



	public:
		static I_API* Create(const std::string& APIName);
		virtual void Release() override;

	protected:
		void InternalInit();

	public:
		std::string GetName() { return m_Name; }
		I_FormatManager* GetFormatManager() { return m_FormatManager; }
		I_UsageManager* GetUsageManager() { return m_UsageManager; }

	};

}