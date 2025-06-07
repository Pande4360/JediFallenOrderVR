#include "..\FUObjectArray.hpp"
#include "AI_CON_Croakodile_C.hpp"
#include "..\_Game_Characters__Shared_BehaviorTree_AI_CON_EnemyBase\AI_CON_EnemyBase_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Game_Characters_Croakadile_Logic_BehaviorTree_AI_CON_Croakodile::AI_CON_Croakodile_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Croakadile/Logic/BehaviorTree/AI_CON_Croakodile.AI_CON_Croakodile_C");
    return result;
}
