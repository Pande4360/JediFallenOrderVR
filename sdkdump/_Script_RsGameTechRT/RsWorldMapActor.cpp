#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "RsWorldMapActor.hpp"
bool _Script_RsGameTechRT::RsWorldMapActor::get_bKeepOnStaticLayer() {
    return (*(uint8_t*)((uintptr_t)this + 0x360 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsWorldMapActor::set_bKeepOnStaticLayer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x360 + 0);
    *(uint8_t*)((uintptr_t)this + 0x360 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_RsGameTechRT::RsWorldMapActor::get_StaticLayerOverride() {
    return *(int32_t*)((uintptr_t)this + 0x364);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsWorldMapActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsWorldMapActor");
    return result;
}
void _Script_RsGameTechRT::RsWorldMapActor::SetVisible() {
    return;
}
void _Script_RsGameTechRT::RsWorldMapActor::ApplyRuntimeSettings() {
    return;
}
