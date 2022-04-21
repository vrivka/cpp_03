# C++ - modules

C++ - modules серия задач для изучения различных аспектов языка C++ и ООП.

## Ссылки на другие модули

0. [CPP module 00](https://github.com/vrivka/cpp_00)
1. [CPP module 01](https://github.com/vrivka/cpp_01)
2. [CPP module 02](https://github.com/vrivka/cpp_02)
3. CPP module 03
4. [CPP module 04](https://github.com/vrivka/cpp_04)
5. [CPP module 05](https://github.com/vrivka/cpp_05)
6. [CPP module 06](https://github.com/vrivka/cpp_06)
7. [CPP module 07](https://github.com/vrivka/cpp_07)
8. [CPP module 08](https://github.com/vrivka/cpp_08)

# C++ - Module 03

## Описание модуля

Этот модуль разработан, чтобы помочь понять наследование в C++.

## Задачи

### Exercise 00: Aaaaand... OPEN!

Требуется реализовать класс. Он будет называться `ClapTrap` и будет иметь следующие `private` атрибуты, инициализированные следущими значениями:
- `name`, которое передается в качестве параметра конструктору;
- `hit_points` - `10`, представляет собой здоровье `ClapTrap`;
- `energy_points` - `10`;
- `attack_damage` - `0`.

А так же следующие `public` функции-члены:
```C++
void attack(const std::string& target);
```
```C++
void takeDamage(unsigned int amount);
```
```C++
void beRepaired(unsigned int amount);
```
Когда `ClapTrap` атакует, цель теряет очки жизни на `<attack_damage>`. Когда `ClapTrap` получает урон, то теряет очки жизни на `<amount>`. Когда `ClapTrap` восстанавливает себя, он восстанавливает очки жизни и очки энергии на `<amount>`. Атака и ремонт стоят 1 очко энергии каждое. Конечно, `ClapTrap` ничего не может сделать, если у него не осталось ни очков жизни, ни очков энергии.

Во всех этих функциях-членах должно выводится сообщение, описывающее происходящее. Например, функция `attack()` может отображать что-то вроде:
```
ClapTrap <name> attacks <target>, causing <damage> points of damage!
```

Конструкторы и деструктор также должны отображать сообщение.

### Exercise 01: Serena, my love!

Теперь создадим производного робота. Он будет называться `ScavTrap` и унаследует конструкторы и деструктор от `ClapTrap`. Однако его конструкторы, деструктор и функция `attack()` будут печатать другие сообщения.

`ScavTrap` будет использовать атрибуты `ClapTrap` (требуется обновить `ClapTrap`) и должен инициализировать их:
- `name`, передается в качестве параметра конструктору;
- `hit_points` - `100`, представляют собой здоровье `ClapTrap`;
- `energy_points` - `50`;
- `attack_damage` - `20`.

У `ScavTrap` также будет своя особая способность:
```C++
void GuardGate();
```
Эта функция-член отобразит сообщение, информирующее о том, что `ScavTrap` теперь находится в режиме привратника.

### Exercise 02: Repetitive work

Теперь реализуем класс `FragTrap`, наследуемый от `ClapTrap`. Он очень похож на `ScavTrap`. Однако его сообщения при создании/уничтожении должны отличаться.

То же самое для атрибутов, но на этот раз с другими значениями:
- `name`, передается в качестве параметра конструктору;
- `hit_points` - `100`, представляют собой здоровье `ClapTrap`;
- `energy_points` - `100`;
- `attack_damage` - `30`.

`FragTrap` также имеет особую способность:
```C++
void highFivesGuys();
```
Эта функция-член отображает в стандартный вывод позитивное преджение - "дай пять".

### Exercise 03: Now it’s weird!

В этом упражнении мы создадим монстра: `ClapTrap`, наполовину `FragTrap`, наполовину `ScavTrap`. Он будет называться `DiamondTrap` и будет унаследован как от `FragTrap`, так и от `ScavTrap`.

Его атрибуты и функции-члены будут выбраны из любого из его родительских классов:
- `name`, передается в качестве параметра конструктору;
- `ClapTrap::name` - параметр конструктора + "_clap_name";
- `hit_points` от `FragTrap`;
- `energy_points` - `ScavTrap`;
- `attack_damage` - `FragTrap`;
- `attack()` - `ScavTrap`.

Помимо специальных функций обоих родительских классов, `DiamondTrap` будет иметь свою:
```C++
void whoAmI();
```
Эта функция-член будет отображать как свое имя, так и имя `ClapTrap`.

Конечно, подобъект `ClapTrap` для `DiamondTrap` будет создан один раз и только один раз.



###### Навигация по модулям
[<<<<](https://github.com/vrivka/cpp_02)
[00](https://github.com/vrivka/cpp_00) |
[01](https://github.com/vrivka/cpp_01) |
[02](https://github.com/vrivka/cpp_02) |
03 |
[04](https://github.com/vrivka/cpp_04) |
[05](https://github.com/vrivka/cpp_05) |
[06](https://github.com/vrivka/cpp_06) |
[07](https://github.com/vrivka/cpp_07) |
[08](https://github.com/vrivka/cpp_08) |
[>>>>](https://github.com/vrivka/cpp_04)