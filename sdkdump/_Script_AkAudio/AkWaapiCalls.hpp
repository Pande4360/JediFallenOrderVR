#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AKWaapiJsonObject.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AkAudio {
struct AkWaapiSubscriptionId;
}
namespace _Script_AkAudio {
struct AkWaapiUri;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct AkWaapiCalls : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    _Script_AkAudio::AKWaapiJsonObject Unsubscribe(_Script_AkAudio::AkWaapiSubscriptionId& SubscriptionId, bool& UnsubscriptionDone);
    _Script_AkAudio::AKWaapiJsonObject SubscribeToWaapi(_Script_AkAudio::AkWaapiUri& WaapiUri, _Script_AkAudio::AKWaapiJsonObject& WaapiOptions, void*& Callback, _Script_AkAudio::AkWaapiSubscriptionId& SubscriptionId, bool& SubscriptionDone);
    void SetSubscriptionID(_Script_AkAudio::AkWaapiSubscriptionId& Subscription, int32_t ID);
    bool RegisterWaapiProjectLoadedCallback(void*& Callback);
    bool RegisterWaapiConnectionLostCallback(void*& Callback);
    int32_t GetSubscriptionID(_Script_AkAudio::AkWaapiSubscriptionId& Subscription);
    void* Conv_FAkWaapiSubscriptionIdToText(_Script_AkAudio::AkWaapiSubscriptionId& INAkWaapiSubscriptionId);
    void* Conv_FAkWaapiSubscriptionIdToString(_Script_AkAudio::AkWaapiSubscriptionId& INAkWaapiSubscriptionId);
    _Script_AkAudio::AKWaapiJsonObject CallWaapi(_Script_AkAudio::AkWaapiUri& WaapiUri, _Script_AkAudio::AKWaapiJsonObject& WaapiArgs, _Script_AkAudio::AKWaapiJsonObject& WaapiOptions);
}; // Size: 0x28
#pragma pack(pop)
}
