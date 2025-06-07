#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Texture;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct StereoLayerFunctionLibrary : public BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void ShowSplashScreen();
    void SetSplashScreen(_Script_Engine::Texture* Texture, _Script_CoreUObject::Vector2D Scale, _Script_CoreUObject::Vector2D Offset, bool bShowLoadingMovie, bool bShowOnSet);
    void HideSplashScreen();
    void EnableAutoLoadingSplashScreen(bool InAutoShowEnabled);
}; // Size: 0x28
#pragma pack(pop)
}
