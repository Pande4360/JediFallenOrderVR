#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\OnlineBlueprintCallProxyBase.hpp"
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
struct BlueprintSessionResult;
}
namespace _Script_OnlineSubsystemUtils {
#pragma pack(push, 1)
struct JoinSessionCallbackProxy : public _Script_Engine::OnlineBlueprintCallProxyBase {
    private: char pad_28[0x100]; public:
    void* get_OnSuccess();
    void* get_OnFailure();
    static _Script_CoreUObject::Class* static_class();
    _Script_OnlineSubsystemUtils::JoinSessionCallbackProxy* JoinSession(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* PlayerController, _Script_OnlineSubsystemUtils::BlueprintSessionResult& SearchResult);
}; // Size: 0x128
#pragma pack(pop)
}
