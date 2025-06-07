#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LocationBoneSocketInfo.hpp"
void* _Script_Engine::LocationBoneSocketInfo::get_BoneSocketName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::LocationBoneSocketInfo::get_Offset() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::LocationBoneSocketInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.LocationBoneSocketInfo");
    return result;
}
