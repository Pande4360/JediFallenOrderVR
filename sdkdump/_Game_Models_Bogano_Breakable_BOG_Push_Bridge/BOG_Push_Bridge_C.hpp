#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP\EmpirePullBridge_BP_C.hpp"
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_SwGame {
struct RsAbilityUserComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Models_Bogano_Breakable_BOG_Push_Bridge {
#pragma pack(push, 1)
struct BOG_Push_Bridge_C : public _Game_Levels_Kashyyyk_Fac_Assets_EmpirePullBridge_BP::EmpirePullBridge_BP_C {
    private: char pad_3d8[0x28]; public:
    void* get_UberGraphFrame0();
    _Script_Engine::StaticMeshComponent*& get_StaticMesh2();
    _Script_Engine::StaticMeshComponent*& get_StaticMesh1();
    _Script_Engine::StaticMeshComponent*& get_StaticMesh();
    _Script_SwGame::RsAbilityUserComponent*& get_PlayerAbilityUser();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void Highlight_SetToPush();
    void Highlight_SetToPull();
    void BeginPlay_Highlight();
    void ExecuteUbergraph_BOG_Push_Bridge(int32_t EntryPoint);
}; // Size: 0x400
#pragma pack(pop)
}
