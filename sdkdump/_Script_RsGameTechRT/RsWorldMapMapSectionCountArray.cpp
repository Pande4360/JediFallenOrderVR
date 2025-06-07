#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsWorldMapMapSectionCountArray.hpp"
void* _Script_RsGameTechRT::RsWorldMapMapSectionCountArray::get_PerRegionMapSectionCounts() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsWorldMapMapSectionCountArray::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsWorldMapMapSectionCountArray");
    return result;
}
