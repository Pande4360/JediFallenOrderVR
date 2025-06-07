#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_RsGameTechRT {
struct RsPostProcessSettingsDefinition;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwHighlightManager : public _Script_CoreUObject::Object {
    private: char pad_28[0x108]; public:
    _Script_RsGameTechRT::RsPostProcessSettingsDefinition*& get_PostProcessSettings();
    _Script_Engine::MaterialInstanceDynamic*& get_DynamicHighlightMaterial();
    void* get_BlendData();
    static _Script_CoreUObject::Class* static_class();
    void SetHighlightBlendCurve(_Script_Engine::Actor* InBlendActor, void* InHighlightType, _Script_Engine::CurveFloat* InBlendCurve, float Duration);
    void EnableIntenseHighlightMode(float FresnelBias);
    void EnableHighlight(_Script_Engine::Actor* InActor, void* InHighlightType);
    void DisableIntenseHighlightMode();
    void DisableHighlight(_Script_Engine::Actor* InActor, void* InHighlightType);
}; // Size: 0x130
#pragma pack(pop)
}
