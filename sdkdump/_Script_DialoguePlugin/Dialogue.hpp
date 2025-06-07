#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DialogueNode.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_Engine {
struct GameInstance;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_DialoguePlugin {
#pragma pack(push, 1)
struct Dialogue : public _Script_Engine::DataAsset {
    private: char pad_30[0x70]; public:
    bool get_DisplayIdleSplines();
    void set_DisplayIdleSplines(bool value);
    float& get_Delay();
    bool get_bReplayable();
    void set_bReplayable(bool value);
    bool get_OcclusionEnabled();
    void set_OcclusionEnabled(bool value);
    bool get_bDisablePlayerMovementControl();
    void set_bDisablePlayerMovementControl(bool value);
    bool get_bDisablePlayerCameraControl();
    void set_bDisablePlayerCameraControl(bool value);
    bool get_bEndableEarly();
    void set_bEndableEarly(bool value);
    bool get_bAutoPlay();
    void set_bAutoPlay(bool value);
    bool get_bBackgroundConversation();
    void set_bBackgroundConversation(bool value);
    int32_t& get_SubtitleAttenuationRange();
    void* get_Name();
    void* get_Data();
    int32_t& get_NextNodeId();
    int32_t& get_Priority();
    int32_t& get_SpeakersCount();
    int32_t& get_SpeakersHash();
    _Script_Engine::GameInstance*& get_PersistentGameInstance();
    static _Script_CoreUObject::Class* static_class();
    void* GetNextNodes(_Script_DialoguePlugin::DialogueNode Node);
    _Script_DialoguePlugin::DialogueNode GetFirstNode();
    void CleanOuter();
    void CallFunctionByName(_Script_CoreUObject::Object* Object, void* FunctionName);
    void AssignPersistentOuter(_Script_Engine::GameInstance* inGameInstance);
}; // Size: 0xa0
#pragma pack(pop)
}
