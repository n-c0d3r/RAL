#pragma once

#include <RAL/.BuildInfo>
#include <RAL/Utils.h>

#include <RAL/API.h>



namespace RAL {

    namespace DirectX11 {

        class C_API :
            public I_API
        {

        public:
            C_API();
            virtual void Release() override;

            virtual std::string GetName() override;

        private:
            void SetupFormats();

        };

    }

}