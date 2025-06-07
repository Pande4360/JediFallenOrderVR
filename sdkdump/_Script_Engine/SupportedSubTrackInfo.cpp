#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SupportedSubTrackInfo.hpp"
void* _Script_Engine::SupportedSubTrackInfo::get_SupportedClass() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::SupportedSubTrackInfo::get_SubTrackName() {
    return (void*)((uintptr_t)this + 0x8);
}
int32_t& _Script_Engine::SupportedSubTrackInfo::get_GroupIndex() {
    return *(int32_t*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Engine::SupportedSubTrackInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SupportedSubTrackInfo");
    return result;
}
