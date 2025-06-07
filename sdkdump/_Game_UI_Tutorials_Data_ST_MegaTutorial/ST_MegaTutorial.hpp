#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Tutorials_Data_ST_MegaTutorial {
#pragma pack(push, 1)
struct ST_MegaTutorial {
    private: char pad_0[0x58]; public:
    void* get_Title_2_135136E74CFC29252670A9968E7B7BEA();
    void* get_Text1_4_B262302B489693D1DDE96FA1AF629D23();
    void* get_Text2_6_D629D7D7457858485C2AEBAFCE18BFC4();
    _Script_Engine::Texture2D*& get_Image1_9_7E75950344149675EE0C19859C7FAAE6();
    _Script_Engine::Texture2D*& get_Image2_11_90E742C84D7439AE91DC139170A92DD2();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
