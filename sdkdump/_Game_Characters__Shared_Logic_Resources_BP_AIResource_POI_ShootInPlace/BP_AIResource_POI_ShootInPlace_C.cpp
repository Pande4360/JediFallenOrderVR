#include "..\FUObjectArray.hpp"
#include "BP_AIResource_POI_ShootInPlace_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsAIResource_Timer.hpp"
_Script_CoreUObject::Class* _Game_Characters__Shared_Logic_Resources_BP_AIResource_POI_ShootInPlace::BP_AIResource_POI_ShootInPlace_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/_Shared/Logic/Resources/BP_AIResource_POI_ShootInPlace.BP_AIResource_POI_ShootInPlace_C");
    return result;
}
