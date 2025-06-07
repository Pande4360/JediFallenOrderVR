#include "..\FUObjectArray.hpp"
#include "Func_Difficulty_C.hpp"
#include "..\_Game_GlobalData_Difficulty_Struct_DifficultyModifiers\Struct_DifficultyModifiers.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
_Script_CoreUObject::Class* _Game_GlobalData_Difficulty_Func_Difficulty::Func_Difficulty_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/Difficulty/Func_Difficulty.Func_Difficulty_C");
    return result;
}
void _Game_GlobalData_Difficulty_Func_Difficulty::Func_Difficulty_C::GetCurrentDifficultyRow(_Script_CoreUObject::Object* __WorldContext, _Game_GlobalData_Difficulty_Struct_DifficultyModifiers::Struct_DifficultyModifiers& Out_Row) {
    return;
}
