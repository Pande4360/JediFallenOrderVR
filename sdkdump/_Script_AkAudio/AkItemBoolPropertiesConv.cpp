#include "..\FUObjectArray.hpp"
#include "AkBoolPropertyToControl.hpp"
#include "AkItemBoolPropertiesConv.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
_Script_CoreUObject::Class* _Script_AkAudio::AkItemBoolPropertiesConv::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.AkItemBoolPropertiesConv");
    return result;
}
void* _Script_AkAudio::AkItemBoolPropertiesConv::Conv_FAkBoolPropertyToControlToText(_Script_AkAudio::AkBoolPropertyToControl& INAkBoolPropertyToControl) {
    return;
}
void* _Script_AkAudio::AkItemBoolPropertiesConv::Conv_FAkBoolPropertyToControlToString(_Script_AkAudio::AkBoolPropertyToControl& INAkBoolPropertyToControl) {
    return;
}
