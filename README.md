#### Crpage_project4
# Narwalls and Octopus

So, the basis of this project is a little game. 
It's a 2 player (or one very lonely person) game where 
one person is the Octopus and the other is the Narwall. 
Basically, you try to make your creature get 100 IQ points
before the other. You can finish the game one of two ways. 

1. You win
2. You make the other creature Loose

You can make the other creature loose by killing it. 
When a creature battles and looses it looses IQ points. 
If a creature has less than 0 IQ points it dies of stupidity.
So, if you think you're a more powerful Mystical creature,
you can battle the other player and gain a few IQ points of your own and 
make them loose even more. 


## Mystical Sea Creatures

Mystical Sea Creatures are Amazing! They're Mystical and awesome.
This is why I chose to make a mystical sea creatures class. ALso, Octopus. I LOVE 
Octopus. A lot. 

if you get the chance you should 100% watch this. THEY'RE So SMART!
`https://www.youtube.com/watch?v=Owelt6QKMKo`

All the getters and setters are universal for the MCS classes,
but the following methods are different.

* Win fight
* Loose Fight
* It was a tie
* Get Smarter

Basically, like us, creatures learn at different rates.
So, I made this true for my sea creatures class.

## Octopus class

I know. Shocker here. 

The Octopus class is great. It has tenticles and 8 of them.
it also learns at a different rate than the Narwall class. 

#### Virtual Methods

###### Win Fight
when an Octopus wins a fight it gains 5 IQ points. 
###### Loose Fight
when an Octopus looses a fight it looses 10 IQ points.
###### It was a tie
when a battle was a tie Octopus will gain 1 IQ point.
###### Get Smarter
to get smarter, an Octopus reads a book on complex systems.
this gains the Octopus 1 IQ point 

## Narwall class

They live in the ocean because they are so awesome.

The Narwall class is great. It has Fins and 2 of them.
it also learns at a different rate than the Octopus class. 

#### Virtual Methods

###### Win Fight
when a Narwall wins a fight it gains 3 IQ points. 
###### Loose Fight
when a Narwall looses a fight it looses 10 IQ points.
###### It was a tie
when a battle was a tie Narwall will gain 2 IQ point.
###### Get Smarter
to get smarter, an Narwall Learns how to do a new gymnastics trick.
Narwall are the Simone Biles of the ocean.
this gains the Narwall 3 IQ point 

## NameSpaces
I chose to make a Mystical namespace. Inside this namespace is another 
namespace of just enums. I chose to do this for organizational reasons. In 
my mind it's just neater. 
The mystical namespace has the following in it: 

* mystical_enums namspace
     * Mystical Powers Enum:
        * Invisability
        * Telepathy
        * Sparkles
        * Always Right
     * Tale Type Enum
        * Fins
        * Tenticles
        * Claws
        * None
        
* IQ stuct
    * Smartness
    * Fights Won
    * Fights Lost

## Optional

My plan is to create more Mystical Sea Creatures like 
the sea worm class. Sea Worms have no legs, so I made 
number of legs optional inside the Mystical Sea Creatures 
class. 

## I/O in my Project

I/O comes into play when a mystical creature dies. 
A handy text file is created with the death certificate of the 
dead creature. It looks something like this 
```$xslt
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
~                                                                ~
~                                                                ~
~                                                                ~
~                                                                ~
~            Official Death Certificate Of                       ~
~                        Lisa                                    ~
~              We are very sad they died                         ~
~                                                                ~
~                                                                ~
~                                                                ~
~                                                                ~
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
```
## Polymorphism

Polymorphism is real here because when called, octopus and narwall
get_smarter() in different ways. 
as stated above, narwall do gymnastics and octopus read about complex 
systems. 
I chose this because Octopus are notoriously intelegent, but narwalls are very
strong. So Octopus reading and narwalls doing gymnastics just seemed logical. 


## Thank You
thanks for reading this all the way through! Have fun playing Narwalls and Octopus!