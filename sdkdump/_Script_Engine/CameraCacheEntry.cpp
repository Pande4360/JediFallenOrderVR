#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CameraCacheEntry.hpp"
float& _Script_Engine::CameraCacheEntry::get_Timestamp() {
    return *(float*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::CameraCacheEntry::get_POV() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::CameraCacheEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CameraCacheEntry");
    return result;
}
