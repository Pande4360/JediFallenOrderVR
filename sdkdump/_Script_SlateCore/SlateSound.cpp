#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SlateSound.hpp"
_Script_CoreUObject::Object*& _Script_SlateCore::SlateSound::get_ResourceObject() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SlateCore::SlateSound::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SlateCore.SlateSound");
    return result;
}
