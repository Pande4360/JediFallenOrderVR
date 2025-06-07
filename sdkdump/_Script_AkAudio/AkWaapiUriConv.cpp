#include "..\FUObjectArray.hpp"
#include "AkWaapiUri.hpp"
#include "AkWaapiUriConv.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
_Script_CoreUObject::Class* _Script_AkAudio::AkWaapiUriConv::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.AkWaapiUriConv");
    return result;
}
void* _Script_AkAudio::AkWaapiUriConv::Conv_FAkWaapiUriToString(_Script_AkAudio::AkWaapiUri& INAkWaapiUri) {
    return;
}
void* _Script_AkAudio::AkWaapiUriConv::Conv_FAkWaapiUriToText(_Script_AkAudio::AkWaapiUri& INAkWaapiUri) {
    return;
}
