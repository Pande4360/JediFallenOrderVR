#include "..\FUObjectArray.hpp"
#include "AkWaapiFieldNames.hpp"
#include "SAkWaapiFieldNamesConv.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
_Script_CoreUObject::Class* _Script_AkAudio::SAkWaapiFieldNamesConv::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.SAkWaapiFieldNamesConv");
    return result;
}
void* _Script_AkAudio::SAkWaapiFieldNamesConv::Conv_FAkWaapiFieldNamesToText(_Script_AkAudio::AkWaapiFieldNames& INAkWaapiFieldNames) {
    return;
}
void* _Script_AkAudio::SAkWaapiFieldNamesConv::Conv_FAkWaapiFieldNamesToString(_Script_AkAudio::AkWaapiFieldNames& INAkWaapiFieldNames) {
    return;
}
