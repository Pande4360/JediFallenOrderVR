#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "QualifiedFrameTime.hpp"
void* _Script_CoreUObject::QualifiedFrameTime::get_Time() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_CoreUObject::QualifiedFrameTime::get_Rate() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_CoreUObject::QualifiedFrameTime::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.QualifiedFrameTime");
    return result;
}
