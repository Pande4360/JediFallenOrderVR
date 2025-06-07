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
struct AkWaapiFieldNames;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct AkWaapiJsonManager : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    _Script_AkAudio::AKWaapiJsonObject SetStringField(_Script_AkAudio::AkWaapiFieldNames& FieldName, void* FieldValue, _Script_AkAudio::AKWaapiJsonObject Target);
    _Script_AkAudio::AKWaapiJsonObject SetObjectField(_Script_AkAudio::AkWaapiFieldNames& FieldName, _Script_AkAudio::AKWaapiJsonObject FieldValue, _Script_AkAudio::AKWaapiJsonObject Target);
    _Script_AkAudio::AKWaapiJsonObject SetNumberField(_Script_AkAudio::AkWaapiFieldNames& FieldName, float FieldValue, _Script_AkAudio::AKWaapiJsonObject Target);
    _Script_AkAudio::AKWaapiJsonObject SetBoolField(_Script_AkAudio::AkWaapiFieldNames& FieldName, bool FieldValue, _Script_AkAudio::AKWaapiJsonObject Target);
    _Script_AkAudio::AKWaapiJsonObject SetArrayStringFields(_Script_AkAudio::AkWaapiFieldNames& FieldName, void*& FieldStringValues, _Script_AkAudio::AKWaapiJsonObject Target);
    _Script_AkAudio::AKWaapiJsonObject SetArrayObjectFields(_Script_AkAudio::AkWaapiFieldNames& FieldName, void*& FieldObjectValues, _Script_AkAudio::AKWaapiJsonObject Target);
    void* GetStringField(_Script_AkAudio::AkWaapiFieldNames& FieldName, _Script_AkAudio::AKWaapiJsonObject Target);
    _Script_AkAudio::AKWaapiJsonObject GetObjectField(_Script_AkAudio::AkWaapiFieldNames& FieldName, _Script_AkAudio::AKWaapiJsonObject Target);
    float GetNumberField(_Script_AkAudio::AkWaapiFieldNames& FieldName, _Script_AkAudio::AKWaapiJsonObject Target);
    int32_t GetIntegerField(_Script_AkAudio::AkWaapiFieldNames& FieldName, _Script_AkAudio::AKWaapiJsonObject Target);
    bool GetBoolField(_Script_AkAudio::AkWaapiFieldNames& FieldName, _Script_AkAudio::AKWaapiJsonObject Target);
    void* GetArrayField(_Script_AkAudio::AkWaapiFieldNames& FieldName, _Script_AkAudio::AKWaapiJsonObject Target);
    void* Conv_FAKWaapiJsonObjectToText(_Script_AkAudio::AKWaapiJsonObject INAKWaapiJsonObject);
    void* Conv_FAKWaapiJsonObjectToString(_Script_AkAudio::AKWaapiJsonObject INAKWaapiJsonObject);
}; // Size: 0x28
#pragma pack(pop)
}
