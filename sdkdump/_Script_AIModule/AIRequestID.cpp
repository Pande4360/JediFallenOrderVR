#include "..\FUObjectArray.hpp"
#include "AIRequestID.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::AIRequestID::get_RequestID() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_AIModule::AIRequestID::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AIModule.AIRequestID");
    return result;
}
