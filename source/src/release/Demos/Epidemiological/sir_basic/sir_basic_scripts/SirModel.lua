-- @example A Susceptible-Infected-Recovered (SIR) model. 
-- @model In this model the disease has a duration of 8 weeks
-- @version TerraME 1.6


world = Cell{
	susceptible = Nh,
	infected = 2,
	recovered = 0
	
}

chart = Chart{target = world}

world:notify()

t = Timer{
	Event{action = function()
		world.recovered = world.recovered + world.infected / duration
		local new_infected = world.infected * contacts * infections * world.susceptible / 10000
		if new_infected > world.susceptible then
			new_infected = world.susceptible
		end
		world.infected = world.infected - world.infected / duration + new_infected
		world.susceptible = 10000 - world.infected - world.recovered
		world:notify()
	end}
}

t:execute(steps)
