#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Items_Lightsaber_BP_Lightsaber\BP_Lightsaber_C.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Game_Items_Lightsaber_BP_Lightsaber_Hero {
#pragma pack(push, 1)
struct BP_Lightsaber_Hero_C : public _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C {
    private: char pad_5e0[0x80]; public:
    void* get_UberGraphFrame0();
    _Script_Engine::StaticMeshComponent*& get_ExtraHilt();
    _Script_Engine::StaticMeshComponent*& get_Sleeve();
    _Script_Engine::StaticMeshComponent*& get_Switch();
    _Script_Engine::StaticMeshComponent*& get_Emitter();
    _Script_Engine::SceneComponent*& get_HeroHiltRoot();
    void* get_CereSwitchSoftRef();
    void* get_CereSleeveSoftRef();
    static _Script_CoreUObject::Class* static_class();
    void GetExtraTwinHilt(_Script_Engine::StaticMeshComponent*& Mesh);
    void GetAndSetUpEndCap(_Script_Engine::StaticMeshComponent*& EndCap);
    void GetEmitter(_Script_Engine::StaticMeshComponent*& Emitter);
    void GetSwitch(_Script_Engine::StaticMeshComponent*& Switch);
    void GetSleeve(_Script_Engine::StaticMeshComponent*& Sleeve);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void UpdateSaberHiltVisibility(bool IsVisible);
    void SetLightsaberColor(_Script_CoreUObject::LinearColor NewBladeColor, _Script_CoreUObject::LinearColor NewBladeGlowColor);
    void SetSaberIndigo(bool IsIndigo);
    void SetBladeOffset(float Offset);
    void SetAsSaber(bool isSecondBlade);
    void SetYoungCalSaber(_Script_Engine::StaticMesh* Mesh);
    void SetAsTwinCal();
    void SetAsCere();
    void ResetBladeTransform();
    void BladeExtended_Event0(void* Lightsaber);
    void BladeRetracted_Event0(void* Lightsaber);
    void ChangeLightsaberColor0(_Script_CoreUObject::LinearColor New_Blade_Color, _Script_CoreUObject::LinearColor New_Blade_Glow_Color);
    void ExecuteUbergraph_BP_Lightsaber_Hero(int32_t EntryPoint);
}; // Size: 0x660
#pragma pack(pop)
}
