#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Volume.hpp"
#include "RsNavCurrentComponent.hpp"
#include "RsNavVolume.hpp"
_Script_RsGameTechRT::RsNavCurrentComponent*& _Script_RsGameTechRT::RsNavVolume::get_current() {
    return *(_Script_RsGameTechRT::RsNavCurrentComponent**)((uintptr_t)this + 0x3b0);
}
void* _Script_RsGameTechRT::RsNavVolume::get_VolumeColor() {
    return (void*)((uintptr_t)this + 0x3b8);
}
bool _Script_RsGameTechRT::RsNavVolume::get_ShowInGame() {
    return (*(uint8_t*)((uintptr_t)this + 0x3bc + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsNavVolume::set_ShowInGame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3bc + 0);
    *(uint8_t*)((uintptr_t)this + 0x3bc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsNavVolume::get_bRsNavVolumeShouldAlwaysDrawSolid() {
    return (*(uint8_t*)((uintptr_t)this + 0x3bd + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsNavVolume::set_bRsNavVolumeShouldAlwaysDrawSolid(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3bd + 0);
    *(uint8_t*)((uintptr_t)this + 0x3bd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsNavVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsNavVolume");
    return result;
}
