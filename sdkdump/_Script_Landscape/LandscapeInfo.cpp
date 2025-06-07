#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LandscapeInfo.hpp"
void* _Script_Landscape::LandscapeInfo::get_LandscapeActor() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Landscape::LandscapeInfo::get_LandscapeGuid() {
    return (void*)((uintptr_t)this + 0x44);
}
void* _Script_Landscape::LandscapeInfo::get_DrawScale() {
    return (void*)((uintptr_t)this + 0x60);
}
int32_t& _Script_Landscape::LandscapeInfo::get_ComponentSizeQuads() {
    return *(int32_t*)((uintptr_t)this + 0x54);
}
int32_t& _Script_Landscape::LandscapeInfo::get_SubsectionSizeQuads() {
    return *(int32_t*)((uintptr_t)this + 0x58);
}
int32_t& _Script_Landscape::LandscapeInfo::get_ComponentNumSubsections() {
    return *(int32_t*)((uintptr_t)this + 0x5c);
}
void* _Script_Landscape::LandscapeInfo::get_Proxies() {
    return (void*)((uintptr_t)this + 0xc0);
}
_Script_CoreUObject::Class* _Script_Landscape::LandscapeInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Landscape.LandscapeInfo");
    return result;
}
