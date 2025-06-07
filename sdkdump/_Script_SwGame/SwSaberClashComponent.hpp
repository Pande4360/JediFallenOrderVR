#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_RsGameTechRT\RsHeroComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwSaberClashComponent : public _Script_RsGameTechRT::RsHeroComponent {
    private: char pad_180[0x78]; public:
    void* get_OnClashEnded();
    void* get_OnClashButtonMashEnded();
    static _Script_CoreUObject::Class* static_class();
    void OnFinishClashButtonPressed(void* ActionName, void* EventType, _Script_CoreUObject::Object* Handler);
    void OnButtonMashPressed();
    void OnButtonMashEnd();
    bool IsClashing();
    bool IsActionClashing(void* ActionName);
    _Script_CoreUObject::Vector GetCurrentIndicatorWorld(_Script_CoreUObject::Vector SaberStart, _Script_CoreUObject::Vector SaberEnd);
    float GetCurrentIndicatorLocal();
    _Script_CoreUObject::Vector2D GetApprovableClashRange();
    void EndClash();
}; // Size: 0x1f8
#pragma pack(pop)
}
