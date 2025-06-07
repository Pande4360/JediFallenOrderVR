#include "..\FUObjectArray.hpp"
#include "DestructibleFractureSettings.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
int32_t& _Script_ApexDestruction::DestructibleFractureSettings::get_CellSiteCount() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
void* _Script_ApexDestruction::DestructibleFractureSettings::get_FractureMaterialDesc() {
    return (void*)((uintptr_t)this + 0x2c);
}
void* _Script_ApexDestruction::DestructibleFractureSettings::get_ChunkParameters() {
    return (void*)((uintptr_t)this + 0x80);
}
int32_t& _Script_ApexDestruction::DestructibleFractureSettings::get_RandomSeed() {
    return *(int32_t*)((uintptr_t)this + 0x50);
}
int32_t& _Script_ApexDestruction::DestructibleFractureSettings::get_OriginalSubmeshCount() {
    return *(int32_t*)((uintptr_t)this + 0x68);
}
void* _Script_ApexDestruction::DestructibleFractureSettings::get_VoronoiSites() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_ApexDestruction::DestructibleFractureSettings::get_Materials() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_ApexDestruction::DestructibleFractureSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ApexDestruction.DestructibleFractureSettings");
    return result;
}
