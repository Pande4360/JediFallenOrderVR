#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\LevelScriptActor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Levels_Bogano_BOGWorldMap_3DMap_Bogano_Vis {
#pragma pack(push, 1)
struct _3DMap_Bogano_Vis_C : public _Script_Engine::LevelScriptActor {
    private: char pad_368[0x8]; public:
    void* get_UberGraphFrame();
    static _Script_CoreUObject::Class* static_class();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_3DMap_Bogano_Vis(int32_t EntryPoint);
}; // Size: 0x370
#pragma pack(pop)
}
