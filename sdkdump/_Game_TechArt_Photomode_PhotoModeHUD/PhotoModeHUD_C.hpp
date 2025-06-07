#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\SwPhotomodeCameraHUD.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Game_TechArt_Photomode_PhotoMode_HUD_Widget {
struct PhotoMode_HUD_Widget_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_TechArt_Photomode_PhotoModeHUD {
#pragma pack(push, 1)
struct PhotoModeHUD_C : public _Script_SwGame::SwPhotomodeCameraHUD {
    private: char pad_450[0x18]; public:
    void* get_UberGraphFrame();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    _Game_TechArt_Photomode_PhotoMode_HUD_Widget::PhotoMode_HUD_Widget_C*& get_HUD_Widget();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void OnDestroyed_Event_0(_Script_Engine::Actor* DestroyedActor);
    void ExecuteUbergraph_PhotoModeHUD(int32_t EntryPoint);
}; // Size: 0x468
#pragma pack(pop)
}
