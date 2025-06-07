#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "ColorMask.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct RsCharacterMarkInfo;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RsCharacterMarksManager : public _Script_CoreUObject::Object {
    private: char pad_28[0xc0]; public:
    static _Script_CoreUObject::Class* static_class();
    void StopManagingComponent(_Script_Engine::PrimitiveComponent* Component);
    bool ManageComponent(_Script_Engine::PrimitiveComponent* Component, void* Priority);
    bool IsComponentManaged(_Script_Engine::PrimitiveComponent* Component);
    void ClearAllRenderTargetChannels(_Script_Engine::ColorMask ChannelMask);
    bool AssociateComponents(_Script_Engine::PrimitiveComponent* PrimaryComponent, void*& Components);
    bool AddWetness(_Script_Engine::PrimitiveComponent* Component, float StartU, float EndU, float HeightV, float FalloffUV, bool bFromBottom, float Intensity, bool bRain);
    bool AddFillRect(_Script_Engine::PrimitiveComponent* Component, _Script_CoreUObject::Vector2D StartUV, _Script_CoreUObject::Vector2D EndUV, float FalloffUV, _Script_Engine::ColorMask ColorMask, float Intensity);
    bool AddDynamicMark(_Script_Engine::PrimitiveComponent* Component, _Script_Engine::RsCharacterMarkInfo& MarkInfo);
    bool AddDynamicLine(_Script_Engine::PrimitiveComponent* Component, void*& Points, bool bLineStrip, float Width, float Intensity, float EdgeIntensity, _Script_Engine::ColorMask ColorMask);
}; // Size: 0xe8
#pragma pack(pop)
}
