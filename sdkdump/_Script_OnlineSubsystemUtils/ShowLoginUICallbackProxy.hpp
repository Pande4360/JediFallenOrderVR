#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintAsyncActionBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_OnlineSubsystemUtils {
#pragma pack(push, 1)
struct ShowLoginUICallbackProxy : public _Script_Engine::BlueprintAsyncActionBase {
    private: char pad_30[0x30]; public:
    void* get_OnSuccess();
    void* get_OnFailure();
    static _Script_CoreUObject::Class* static_class();
    _Script_OnlineSubsystemUtils::ShowLoginUICallbackProxy* ShowExternalLoginUI(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* InPlayerController);
}; // Size: 0x60
#pragma pack(pop)
}
