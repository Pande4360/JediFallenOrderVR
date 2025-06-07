#include "..\FUObjectArray.hpp"
#include "func_Color_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
void _Game_GlobalData_Functions_func_Color::func_Color_C::Tint_RGB(_Script_CoreUObject::LinearColor Color, float Tint, _Script_CoreUObject::Object* __WorldContext, _Script_CoreUObject::LinearColor& Tinted_Color) {
    return;
}
_Script_CoreUObject::Class* _Game_GlobalData_Functions_func_Color::func_Color_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/Functions/func_Color.func_Color_C");
    return result;
}
void _Game_GlobalData_Functions_func_Color::func_Color_C::Shade_RGB(_Script_CoreUObject::LinearColor Color, float Shade, _Script_CoreUObject::Object* __WorldContext, _Script_CoreUObject::LinearColor& Shaded_Color) {
    return;
}
