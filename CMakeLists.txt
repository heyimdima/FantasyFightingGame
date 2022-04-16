cmake_minimum_required(VERSION 3.21)
project(FantasyFightingGame)

set(CMAKE_CXX_STANDARD 14)

add_executable(FantasyFightingGame main.cpp Creature/Character/Character.cpp Creature/Character/Character.h Creature/Enemy/Enemy.cpp Creature/Enemy/Enemy.h Creature/Creature.cpp Creature/Creature.h Shop/Item/Weapon/Weapon.cpp Shop/Item/Weapon/Weapon.h Shop/Item/Item.cpp Shop/Item/Item.h Shop/Item/Weapon/Weapons/Stick.cpp Shop/Item/Weapon/Weapons/Stick.h Shop/Item/Weapon/Weapons/Dagger.cpp Shop/Item/Weapon/Weapons/Dagger.h Shop/Item/Weapon/Weapons/Katana.cpp Shop/Item/Weapon/Weapons/Katana.h Shop/Item/Weapon/Weapons/Pistol.cpp Shop/Item/Weapon/Weapons/Pistol.h Shop/Item/Armor/Armor.cpp Shop/Item/Armor/Armor.h Shop/Item/Armor/Armors/WoodenArmor.cpp Shop/Item/Armor/Armors/WoodenArmor.h Shop/Shop.cpp Shop/Shop.h Shop/Item/Armor/Armors/IronArmor.cpp Shop/Item/Armor/Armors/IronArmor.h Shop/Item/Armor/Armors/ModernArmor.cpp Shop/Item/Armor/Armors/ModernArmor.h Game.cpp Game.h Arena/Arena.cpp Arena/Arena.h)
