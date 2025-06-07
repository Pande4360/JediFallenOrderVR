#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Box.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "FoliageStatistics.hpp"
_Script_CoreUObject::Class* _Script_Foliage::FoliageStatistics::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Foliage.FoliageStatistics");
    return result;
}
int32_t _Script_Foliage::FoliageStatistics::FoliageOverlappingSphereCount(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::StaticMesh* StaticMesh, _Script_CoreUObject::Vector CenterPosition, float Radius) {
    return;
}
int32_t _Script_Foliage::FoliageStatistics::FoliageOverlappingBoxCount(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::StaticMesh* StaticMesh, _Script_CoreUObject::Box Box) {
    return;
}
