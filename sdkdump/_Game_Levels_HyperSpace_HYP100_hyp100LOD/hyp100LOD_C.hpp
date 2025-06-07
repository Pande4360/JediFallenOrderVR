#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\LevelScriptActor.hpp"
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct StaticMeshActor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Game_Levels_HyperSpace_HYP100_hyp100LOD {
#pragma pack(push, 1)
struct hyp100LOD_C : public _Script_Engine::LevelScriptActor {
    private: char pad_368[0x58]; public:
    void* get_UberGraphFrame();
    void* get_Planet();
    _Script_Engine::Actor*& get_UFClandingMarker_ExecuteUbergraph_hyp100LOD_RefProperty();
    _Script_Engine::StaticMeshActor*& get_mantisLOD2staticLanded_2_ExecuteUbergraph_hyp100LOD_RefProperty();
    _Script_Engine::Actor*& get_BRAlandingMarker_ExecuteUbergraph_hyp100LOD_RefProperty();
    _Script_Engine::Actor*& get_BOGlandingMarker_ExecuteUbergraph_hyp100LOD_RefProperty();
    _Script_Engine::Actor*& get_DATlandingMarker_ExecuteUbergraph_hyp100LOD_RefProperty();
    _Script_Engine::Actor*& get_KASlandingMarker_ExecuteUbergraph_hyp100LOD_RefProperty();
    _Script_Engine::Actor*& get_ZEFlandingMarker_ExecuteUbergraph_hyp100LOD_RefProperty();
    _Script_Engine::Actor*& get_ILUMlandingMarker_ExecuteUbergraph_hyp100LOD_RefProperty();
    _Script_Engine::Actor*& get_FORTlandingMarker_ExecuteUbergraph_hyp100LOD_RefProperty();
    static _Script_CoreUObject::Class* static_class();
    void OnLoaded_4481D9104D8CD6FC0DFB42A993A4BDA4(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_8680E21B4BE6DB6E0897C4BF6CBCC04C(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_5BB838D6464C3C5624E0E796D1F0B9FE(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_F13626644A8FE2D99842B9AFF434D74A(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_52BA44AC43E3E68FFB8EC191534011EB(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_BFE1A9D94768BD36E7420CA28E2BAB5C(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_CFECF197454A01E2F14F28B2C3F06D07(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_EAC4E5E34F90D6C40C15D19DEFCD8833(_Script_CoreUObject::Object* Loaded);
    void OnLoaded_D6756C3A456F218509CFC8B1F4F6D02E(_Script_CoreUObject::Object* Loaded);
    void ReceiveBeginPlay();
    void mantisCosmetic();
    void ExecuteUbergraph_hyp100LOD(int32_t EntryPoint);
}; // Size: 0x3c0
#pragma pack(pop)
}
