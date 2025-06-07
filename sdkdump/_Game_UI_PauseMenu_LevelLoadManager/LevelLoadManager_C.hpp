#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_PauseMenu_LevelLoadManager {
#pragma pack(push, 1)
struct LevelLoadManager_C : public _Script_Engine::Actor {
    private: char pad_360[0x98]; public:
    void* get_UberGraphFrame();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    void* get_LoadDone();
    void* get_PlanetToLoad();
    void* get_WorldNames();
    bool get_StartListsLoaded();
    void set_StartListsLoaded(bool value);
    void* get_StartToLoad();
    bool get_StartListRequested();
    void set_StartListRequested(bool value);
    void* get_PlanetListRequested();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void ReceiveBeginPlay0();
    void DoLevelLoad(void* World, void* Start);
    void Timer_CheckForLoad();
    void ExecuteUbergraph_LevelLoadManager(int32_t EntryPoint);
    void LoadDone__DelegateSignature();
}; // Size: 0x3f8
#pragma pack(pop)
}
