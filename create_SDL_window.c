/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  create_SDL_window.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfriscca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 13:41:13 by rfriscca          #+#    #+#             */
/*   Updated: 2016/12/01 15:18:28 by rfriscca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SDLFunctions.h"

SDL_Window	*create_sdl_window(char *name, int width, int height)
{
	SDL_Window	*window;
	SDL_Surface	*screensurface;

	window = NULL;
	screensurface = NULL;
	window = SDL_CreateWindow(name, SDL_WINDOWPOS_UNDEFINED,
			SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_SHOWN);
	if (window == NULL)
		write(2, "Error window could not be created", 36);
	else
	{
		screensurface = SDL_GetWindowSurface(window);
		SDL_FillRect(screensurface, NULL, SDL_MapRGB(screensurface->format,
					0x00, 0x00, 0x00));
		SDL_UpdateWindowSurface(window);
	}
	return (window);
}
