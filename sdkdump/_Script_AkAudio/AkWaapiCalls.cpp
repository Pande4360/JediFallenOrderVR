#include "..\FUObjectArray.hpp"
#include "AKWaapiJsonObject.hpp"
#include "AkWaapiCalls.hpp"
#include "AkWaapiSubscriptionId.hpp"
#include "AkWaapiUri.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
int32_t _Script_AkAudio::AkWaapiCalls::GetSubscriptionID(_Script_AkAudio::AkWaapiSubscriptionId& Subscription) {
    return;
}
bool _Script_AkAudio::AkWaapiCalls::RegisterWaapiProjectLoadedCallback(void*& Callback) {
    return;
}
_Script_CoreUObject::Class* _Script_AkAudio::AkWaapiCalls::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.AkWaapiCalls");
    return result;
}
void* _Script_AkAudio::AkWaapiCalls::Conv_FAkWaapiSubscriptionIdToText(_Script_AkAudio::AkWaapiSubscriptionId& INAkWaapiSubscriptionId) {
    return;
}
_Script_AkAudio::AKWaapiJsonObject _Script_AkAudio::AkWaapiCalls::Unsubscribe(_Script_AkAudio::AkWaapiSubscriptionId& SubscriptionId, bool& UnsubscriptionDone) {
    return;
}
_Script_AkAudio::AKWaapiJsonObject _Script_AkAudio::AkWaapiCalls::SubscribeToWaapi(_Script_AkAudio::AkWaapiUri& WaapiUri, _Script_AkAudio::AKWaapiJsonObject& WaapiOptions, void*& Callback, _Script_AkAudio::AkWaapiSubscriptionId& SubscriptionId, bool& SubscriptionDone) {
    return;
}
bool _Script_AkAudio::AkWaapiCalls::RegisterWaapiConnectionLostCallback(void*& Callback) {
    return;
}
void _Script_AkAudio::AkWaapiCalls::SetSubscriptionID(_Script_AkAudio::AkWaapiSubscriptionId& Subscription, int32_t ID) {
    return;
}
void* _Script_AkAudio::AkWaapiCalls::Conv_FAkWaapiSubscriptionIdToString(_Script_AkAudio::AkWaapiSubscriptionId& INAkWaapiSubscriptionId) {
    return;
}
_Script_AkAudio::AKWaapiJsonObject _Script_AkAudio::AkWaapiCalls::CallWaapi(_Script_AkAudio::AkWaapiUri& WaapiUri, _Script_AkAudio::AKWaapiJsonObject& WaapiArgs, _Script_AkAudio::AKWaapiJsonObject& WaapiOptions) {
    return;
}
