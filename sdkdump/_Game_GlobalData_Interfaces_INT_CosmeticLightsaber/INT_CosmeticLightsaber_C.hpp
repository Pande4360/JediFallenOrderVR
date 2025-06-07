#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Game_GlobalData_Interfaces_INT_CosmeticLightsaber {
#pragma pack(push, 1)
struct INT_CosmeticLightsaber_C : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void ResetBladeTransform();
    void GetExtraTwinHilt(_Script_Engine::StaticMeshComponent*& Mesh);
    void SetAsTwinCal();
    void GetAndSetUpEndCap(_Script_Engine::StaticMeshComponent*& EndCap);
    void SetYoungCalSaber(_Script_Engine::StaticMesh* Mesh);
    void SetBladeOffset(float Offset);
    void SetSaberIndigo(bool IsIndigo);
    void SetLightsaberColor(_Script_CoreUObject::LinearColor NewBladeColor, _Script_CoreUObject::LinearColor NewBladeGlowColor);
    void GetSleeve(_Script_Engine::StaticMeshComponent*& Sleeve);
    void GetSwitch(_Script_Engine::StaticMeshComponent*& Switch);
    void GetEmitter(_Script_Engine::StaticMeshComponent*& Emitter);
    void SetAsCere();
    void SetAsSaber(bool isSecondBlade);
    void UpdateSaberHiltVisibility(bool IsVisible);
}; // Size: 0x28
#pragma pack(pop)
}
